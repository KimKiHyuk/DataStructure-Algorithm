#ifndef __CONTEXT_H__
#define __CONTEXT_H__ 
#include "ITest.h"

class Context
{
public:
	Context();
	virtual ~Context();
	
	void Test();
	void setTest(ITest* test);
	
private:
	ITest *_test;
	
};

#endif