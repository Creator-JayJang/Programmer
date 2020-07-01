#include <stdio.h>
#include <stdlib.h>
#include <string.h> 		//memset, memcpy
#include <assert.h>
#include "list.h"

static Node* createNode(const void* pData, int eleSize, Node* next)
{
	Node* ptr = malloc(sizeof(Node) + eleSize);
	assert(ptr);
	memcpy(ptr + 1, pData, eleSize);
	ptr->next = next;

	return ptr;
}

void initList(List* pList, int eleSize)
{
	//pList->ptr = malloc(sizeof(Node)); 		//dummy Node
	//assert(pList->ptr );
	pList->eleSize = eleSize;
	//pList->ptr->next = NULL;	
	pList->ptr = createNode(NULL, 0, NULL);
}

void cleanupList(List* pList)
{
	Node* ptr = pList->ptr;
	while (ptr) {
		Node* tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}
}

void printList(const List* pList, void (*print)(const void*))
{
	Node* ptr = pList->ptr->next;
	printf("[");
	while (ptr) {
		(*print)(ptr + 1);		// = print(ptr + 1);
		printf("%s", (ptr->next) ? ", " : "");		// %d only int
		ptr = ptr->next;
	}
	printf("]\n");
}

void insertFirstNode(List* pList, const void* pData)
{
	/*Node *ptr = malloc(sizeof(Node) + pList->eleSize);
	assert(ptr );
	//ptr->data = data;
	//memcpy((unsinged char *)ptr + pList->eleSize, pData, pList->eleSize);
	memcpy(ptr + 1, pData, pList->eleSize);
	ptr->next = pList->ptr->next;
	pList->ptr->next = ptr;*/

	pList->ptr->next = createNode(pData, pList->eleSize, pList->ptr->next);
}

void insertNode(List* pList, const void* pPrevData, const void* pData)
{
	Node* ptr = pList->ptr->next;		//copy
	while (ptr) {
		//if (ptr->data == prevData)
		if (memcmp(ptr + 1, pPrevData, pList->eleSize) == 0)
			break;
		ptr = ptr->next;
	}

	if (ptr) {
		/* Node *tmp = malloc(sizeof(Node) + pList->eleSize);
		assert(tmp );
		//tmp->data = data;
		memcpy(tmp + 1, pData, pList->eleSize);
		tmp->next = ptr->next;
		ptr->next = tmp; */
		ptr->next = createNode(pData, pList->eleSize, ptr->next);
	}
}

void deleteNode(List* pList, const void* pData)
{
	Node* ptr1 = pList->ptr->next;
	Node* ptr2 = pList->ptr;		//Dummy Node

	while (ptr1) {
		//if (ptr1->data == data)
		if (memcmp(ptr1 + 1, pData, pList->eleSize) == 0)
			break;

		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}

	if (ptr1) {
		ptr2->next = ptr1->next;
		free(ptr1);
	}
}
