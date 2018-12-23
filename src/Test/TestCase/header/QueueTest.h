#ifndef __QUEUE_TEST_H__
#define __QUEUE_TEST_H__

#include "../../TestStrategy/header/ITest.h"

class QueueTest: public ITest
{

public:
	QueueTest();
	virtual ~QueueTest();
	
	virtual void Test();
};

#endif