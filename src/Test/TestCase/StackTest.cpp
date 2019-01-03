#include <iostream>
#include <cstdlib>
#include "header/StackTest.h"
#include "../../Algorithm/Stack/Stack.h"

using namespace std;

Stack<int>* stack;

StackTest::StackTest(void)
{
	cout << "Stack Test Start" << endl;
}

StackTest::~StackTest()
{
	cout << "Stack Test Disposed" << endl;
}

void StackTest::Test()
{
	cout << "Stack Test" << endl;
	
	stack = new Stack<int>();
	
	Test_stack_overflow();
	Test_push();
	Test_pop();
	Test_push();
	Test_pop_when_stack_is_empty();

}

void StackTest::Test_stack_overflow()
{	
	for (int i = 0; i <= MAX_STACK; i++)
	{
		if (!stack->Push((rand() % 100) + 1))
		{
			cout << "[StackTest] Test_stack_overflow Passed" << endl;
		}
	}
	
	for (int i = 0; i < MAX_STACK; i++)
	{
		stack->Clear(i, false);
	}
	
	
}

void StackTest::Test_push()
{	
	if (stack->Push(10))
	{
		cout << "[StackTest] Test_push Passed" << endl;
	}
	else
	{
		cout << "[StackTest] Test_push Failed" << endl;
	}
}
void StackTest::Test_pop()
{
	auto data = stack->Peek();
	
	if (data == '\0')
	{
		cout << "[StackTest] Test_pop Failed" << endl;
	}
	else if (stack->Pop() == data)
	{
		cout << "[StackTest] Test_pop Passed" << endl;
	}
	else
	{
		cout << "[StackTest] Test_pop Failed" << endl;
	}
}
void StackTest::Test_pop_when_stack_is_empty()
{
	for (int i = MAX_STACK; i > 0; i--)
	{
		if (stack->Pop() == '\0')
		{
			cout << "[StackTest] Test_pop_when_stack_is_empty Passed" << endl;
	
			return;
		}
	}
	cout << "[StackTest] Test_pop_when_stack_is_empty Failed" << endl;
}

