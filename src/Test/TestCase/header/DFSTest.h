#ifndef __DFS_TEST_H
#define __DFS_TEST_H

#include "../../TestStrategy/header/ITest.h"

#define SIZE_OF_TEST_MAP 10

class DFSTest : public ITest
{
	public:
		DFSTest();
		virtual ~DFSTest();
		virtual void Test();
	
	private:
		void Test_DFS_Stack();
		void Test_DFS_Rec();
};

#endif