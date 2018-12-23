#ifndef __ITEST_H__
#define __ITEST_H__
#include <iostream>

using namespace std;

class ITest
{
	
public:
	ITest();
	virtual ~ITest();
	virtual void Test();
};

#endif
