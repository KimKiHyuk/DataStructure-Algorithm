#ifndef __STACK_TEST_H__
#define __STACK_TEST_H__

#include "../../TestStrategy/header/ITest.h"

class StackTest: public ITest
{

public:
	StackTest();
	virtual ~StackTest();
	
	virtual void Test();
};

#endif