#ifndef __QUEUE_TEST_H__
#define __QUEUE_TEST_H__

#include "../../TestStrategy/header/ITest.h"

class QueueTest: public ITest
{

public:
	QueueTest();
	virtual ~QueueTest();
	virtual void Test();
	
private:
	void Test_put();
	void Test_get();
	void Test_put_when_queue_is_full();
	void Test_get_when_queue_is_empty();
};

#endif