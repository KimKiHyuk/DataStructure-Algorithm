#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <iostream>
#define MAX_QUEUE 10
using namespace std;

template <typename T>
class Queue
{

public:
	Queue();
	virtual ~Queue();	
	
	T Put(T value);
	T Get();
	T Peek();
	
private:
	unsigned int front = 0;
	unsigned int rear = 0;
	T* data;
};

#include "Queue.hpp"

#endif