#ifndef __ITEST_H__
#define __ITEST_H__

#include <iostream>

#define PRINT_TEST_NAME (std::cout << __func__ << " : ")

class ITest
{
	
public:
	ITest();
	virtual ~ITest();
	virtual void Test();
};

#endif
