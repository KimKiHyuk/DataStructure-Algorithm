#ifndef __STACK_TEST_H__
#define __STACK_TEST_H__

#include "../../TestStrategy/header/ITest.h"

class StackTest: public ITest
{

public:
	StackTest(void);
	virtual ~StackTest(void);
	
	virtual void Test();
private:
	void Test_stack_overflow();
	void Test_push();
	void Test_pop();
	void Test_pop_when_stack_is_empty();
};

#endif