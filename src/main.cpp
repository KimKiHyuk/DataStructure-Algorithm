#include <iostream>

#include "Test/TestStrategy/header/Context.h"
#include "Test/TestStrategy/header/ITest.h"
#include "Test/TestCase/header/StackTest.h"
#include "Test/TestCase/header/QueueTest.h"
#include "Test/TestCase/header/DFSTest.h"
#include "Test/TestCase/header/BFSTest.h"
#include "Test/TestCase/header/HashTest.h"

#include <vector>

int main(int argc, char* argv[]) {
	
	Context* cxt = new Context();
	
	std::vector<ITest*> v;
	std::vector<ITest*>::iterator iter;
		
	v.push_back(new QueueTest());
	v.push_back(new StackTest());
	v.push_back(new DFSTest());
	v.push_back(new BFSTest());
	v.push_back(new HashTest());

	
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		/* another way of testing
		
		ITest* test = *iter;
		test->Test();
		
		OR
		
		(*iter)->Test();
		 
		*/
		
		cxt->setTest(*iter);
		cxt->Test();
		
		delete *iter;
	}
	
	delete cxt;
	
	

	
	return 0;
}

