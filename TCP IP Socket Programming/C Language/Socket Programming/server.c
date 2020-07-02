#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <assert.h>
#define TRUE 1

pthread_mutex_t mutex;

int dataSockets[1024];
int count;

void* handleClient(void* arg)
{
	int dataSocket = *(int*)arg;

	int nread;
	char msg[1024];
	while (nread = read(dataSocket, msg, 1024)) {		// !=0
		pthread_mutex_lock(&mutex);
		// write all client
		for (int i = 0; i < count; ++i)
			write(dataSockets[i], msg, nread);
		pthread_mutex_unlock(&mutex);
	}
	// EOF
	close(dataSocket);
	return NULL;
}

int main(void)
{
	pthread_mutex_init(&mutex, NULL);

	int servSocket = socket(AF_INET, SOCK_STREAM, 0); 		// File Descriptor
	assert(servSocket != -1);

	int option;
	socklen_t optionLen = sizeof(option);
	option = TRUE;
	setsockopt(servSocket, SOL_SOCKET, SO_REUSEADDR, (void*)&option, optionLen);

	struct sockaddr_in servAddr;
	servAddr.sin_family = AF_INET;
	servAddr.sin_addr.s_addr = htonl(INADDR_ANY);
	servAddr.sin_port = htons(7755);

	assert(bind(servSocket, (struct sockaddr*)&servAddr, sizeof(struct sockaddr_in)) != -1);
	assert(listen(servSocket, 5) != -1);

	for (;;) {
		struct sockaddr_in clientAddr;
		int len;

		int dataSocket;
		assert((dataSocket = accept(servSocket, (struct sockaddr*)&clientAddr, &len)) != -1);
		printf("client IP : %s\n", inet_ntoa(clientAddr.sin_addr));

		pthread_mutex_lock(&mutex);
		dataSockets[count] = dataSocket;
		++count;
		pthread_mutex_unlock(&mutex);

		// create thread for read()/ write()
		pthread_t pid;
		pthread_create(&pid, NULL, handleClient, &dataSocket);
		pthread_detach(pid);
	}

	close(servSocket);
	return 0;
}