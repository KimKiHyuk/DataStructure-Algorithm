#include "header/Context.h"

Context::Context()
{
	cout << "Context start" << endl;
}

Context::~Context()
{
	cout << "Context Disposed" << endl;
}

void Context::Test()
{
	_test->Test();
}

void Context::setTest(ITest* test)
{
	_test = test;
}