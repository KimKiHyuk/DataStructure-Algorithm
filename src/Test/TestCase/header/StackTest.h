#ifndef __STACK_TEST_H__
#define __STACK_TEST_H__

#include "../../TestStrategy/header/ITest.h"

template <typename T>
class StackTest: public ITest
{

public:
	StackTest(void);
	virtual ~StackTest(void);
	
	virtual void Test();
};

#endif