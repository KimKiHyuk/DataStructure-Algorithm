#include "header/Context.h"

Context::Context()
{
}

Context::~Context()
{
}

void Context::Test()
{
	_test->Test();
}

void Context::setTest(ITest* test)
{
	_test = test;
}