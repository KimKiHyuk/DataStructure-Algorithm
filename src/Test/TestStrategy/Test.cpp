#include "header/ITest.h"

ITest::ITest()
{
	cout << "ITest Start" << endl;
}

ITest::~ITest()
{
	cout << "ITest Disposed" << endl;
}

void ITest::Test()
{
	cout << "ITest called" << endl;
}