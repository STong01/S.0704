#ifndef _DEQUEUE_H_
#define _DEQUEUE_H_

#include <stdio.h>
#include <stdlib.h>
#define QUEUENUM 5

typedef int DataType;

typedef struct{
	DataType _data[QUEUENUM];
	DataType * _head;
	DataType * _tail;
	size_t _size;
}Dequeue;
void dequeueInit(Dequeue * qu);

void dequeueEmpty(Dequeue * qu);

int dequeuePush(Dequeue * qu, DataType x);

size_t dequeueSize(Dequeue * qu);

#endif //_DEQUEUE_H_