#include <iostream>
#include "header/QueueTest.h"
#include "../../Algorithm/Queue/Queue.h"
#include "header/QueueTest.h"

using namespace std;

Queue<int>* queue;


QueueTest::QueueTest()
{
	cout << "QueueTest Test Start" << endl;
}

QueueTest::~QueueTest()
{
	cout << "QueueTest Test Disposed" << endl;
	delete queue;
}

void QueueTest::Test()
{
	cout << "========= Queue Test ==========" << endl;
	
	queue = new Queue<int>();
	
	Test_put();
	Test_get();
	Test_put_when_queue_is_full();
	Test_get_when_queue_is_empty();
}

void QueueTest::Test_put()
{
	if (queue->Put(10) == '\0')
	{
		cout << "QueueTest::Test_put failed" << endl; 
	}
	else
	{
		cout << "QueueTest::Test_put Passed" << endl; 
	}
}

void QueueTest::Test_get()
{
	if (queue->Get() == '\0')
	{
		cout << "QueueTest::Test_Get failed" << endl; 
	}
	else
	{
		cout << "QueueTest::Test_Get Passed" << endl; 
	}
}

void QueueTest::Test_put_when_queue_is_full()
{
	for (int i = 0; i <= MAX_QUEUE; i++)
	{
		if (queue->Put((rand() % 100) + 1) == '\0')
		{
			cout << "QueueTest::Test_put_when_queue_is_full Passed" << endl; 
			return;
		}
	}

	cout << "QueueTest::Test_put_when_queue_is_full Failed" << endl;
}
void QueueTest::Test_get_when_queue_is_empty()
{
	for (int i = MAX_QUEUE; i >= 0; i--)
	{
		if (queue->Get() == '\0')
		{
			cout << "QueueTest::Test_get_when_queue_is_empty Passed" << endl; 
			return;
			
		}
	}
	
	cout << "QueueTest::Test_get_when_queue_is_empty Failed" << endl; 
}



