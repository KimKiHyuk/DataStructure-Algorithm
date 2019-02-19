#ifndef __HASH_TEST_H
#define __HASH_TEST_H

#include "../../TestStrategy/header/ITest.h"

#define SIZE_OF_TEST_MAP 10

class HashTest : public ITest
{
	public:
		HashTest();
		virtual ~HashTest();
		virtual void Test();
};

#endif