#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <semaphore.h>

void* thread_main1(void* arg);
void* thread_main2(void* arg);
void* thread_main3(void* arg);

static sem_t sem_one;
static sem_t sem_two;
static sem_t sem_three;
static int num;

int main(int argc, char* argv[]) {
	pthread_t t_id1, t_id2, t_id3;

	sem_init(&sem_one, 0, 0);
	sem_init(&sem_two, 0, 0);
	sem_init(&sem_three, 0, 1);

	int thread_param = 5;

	if (pthread_create(&t_id1, NULL, thread_main1, (void*)&thread_param) != 0)
	{
		puts("pthread_create() error");
		return -1;
	}


	if (pthread_create(&t_id2, NULL, thread_main2, (void*)&thread_param) != 0)
	{
		puts("pthread_create() error");
		return -1;
	}

	if (pthread_create(&t_id3, NULL, thread_main3, (void*)&thread_param) != 0)
	{
		puts("pthread_create() error");
		return -1;
	}
	//sleep(10); puts("end of main");

	pthread_join(t_id1, NULL);
	pthread_join(t_id2, NULL);
	pthread_join(t_id3, NULL);

	sem_destroy(&sem_one);
	sem_destroy(&sem_two);
	sem_destroy(&sem_three);

	return 0;
}

void* thread_main1(void* arg)
{
	int i;
	int cnt = *((int*)arg);
	for (i = 0; i < cnt; i++)
	{
		sem_wait(&sem_one);
		sleep(1); puts("running thread1");
		sem_post(&sem_two);
	}
	return NULL;
}

void* thread_main2(void* arg)
{
	int i;
	int cnt = *((int*)arg);
	for (i = 0; i < cnt; i++)
	{
		sem_wait(&sem_two);
		sleep(1); puts("running thread2");
		sem_post(&sem_three);
	}
	return NULL;
}

void* thread_main3(void* arg)
{
	int i;
	int cnt = *((int*)arg);
	for (i = 0; i < cnt; i++)
	{
		sem_wait(&sem_three);
		sleep(1); puts("running thread3");
		sem_post(&sem_one);
	}
	return NULL;
}