#ifndef __LRU_TEST_H__
#define __LRU_TEST_H__
#include "../../TestStrategy/header/ITest.h"

class LRUTest : public ITest
{
	public:
		LRUTest();
		virtual ~LRUTest();
		virtual void Test();
};
#endif