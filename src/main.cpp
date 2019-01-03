#include <iostream>

#include "Test/TestStrategy/header/Context.h"
#include "Test/TestStrategy/header/ITest.h"
#include "Test/TestCase/header/StackTest.h"
#include "Test/TestCase/header/QueueTest.h"

#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
	
	Context* cxt = new Context();
	
	vector<ITest*> v;
	vector<ITest*>::iterator iter;
		
	v.push_back(new StackTest());
	// v.push_back(new QueueTest());
	
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		cxt->setTest(*iter);
		cxt->Test();
		
		delete *iter;
	}
	
	delete cxt;
	
	

	
	return 0;
}

