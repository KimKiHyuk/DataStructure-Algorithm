#ifndef __ITEST_H__
#define __ITEST_H__

#include <iostream>
#include "../../../Helper/IOHelper/io_helper.h"

class ITest
{
	
public:
	ITest();
	virtual ~ITest();
	virtual void Test();
};

#endif
