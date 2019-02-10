#include <iostream>
#include "header/QueueTest.h"
#include "../../DataStructure/Queue/Queue.h"
#include "header/QueueTest.h"

key_ds::Queue<int>* queue;


QueueTest::QueueTest()
{
	std::cout << "QueueTest Test Initalized" << std::endl;
}

QueueTest::~QueueTest()
{
	std::cout << "QueueTest Test Disposed" << std::endl;
	delete queue;
}

void QueueTest::Test()
{
	std::cout << "========= Queue Test ==========" << std::endl;
	
	queue = new key_ds::Queue<int>();
	
	Test_put();
	Test_get();
	Test_put_when_queue_is_full();
	Test_get_when_queue_is_empty();
}

void QueueTest::Test_put()
{
	if (queue->Put(10) == '\0')
	{
		std::cout << "QueueTest::Test_put failed" << std::endl; 
	}
	else
	{
		std::cout << "QueueTest::Test_put Passed" << std::endl; 
	}
}

void QueueTest::Test_get()
{
	if (queue->Get() == '\0')
	{
		std::cout << "QueueTest::Test_Get failed" << std::endl; 
	}
	else
	{
		std::cout << "QueueTest::Test_Get Passed" << std::endl; 
	}
}

void QueueTest::Test_put_when_queue_is_full()
{
	for (int i = 0; i <= MAX_QUEUE; i++)
	{
		if (queue->Put((rand() % 100) + 1) == '\0')
		{
			std::cout << "QueueTest::Test_put_when_queue_is_full Passed" << std::endl; 
			return;
		}
	}

	std::cout << "QueueTest::Test_put_when_queue_is_full Failed" << std::endl;
}
void QueueTest::Test_get_when_queue_is_empty()
{
	for (int i = MAX_QUEUE; i >= 0; i--)
	{
		if (queue->Get() == '\0')
		{
			std::cout << "QueueTest::Test_get_when_queue_is_empty Passed" << std::endl; 
			return;
			
		}
	}
	
	std::cout << "QueueTest::Test_get_when_queue_is_empty Failed" << std::endl; 
}



