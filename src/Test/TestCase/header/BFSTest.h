#ifndef __BFS_TEST_H
#define __BFS_TEST_H

#include "../../TestStrategy/header/ITest.h"

#define SIZE_OF_TEST_MAP 10

class BFSTest : public ITest
{
	public:
		BFSTest();
		virtual ~BFSTest();
		virtual void Test();
	
	private:
};

#endif