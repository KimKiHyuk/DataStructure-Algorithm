#include <iostream>
#include <cstdlib>
#include "header/StackTest.h"
#include "../../DataStructure/Stack/Stack.h"

key_ds::Stack<int>* stack;

StackTest::StackTest(void)
{
	std::cout << "Stack Test Initalized" << std::endl;
}

StackTest::~StackTest()
{
	std::cout << "Stack Test Disposed" << std::endl;
	delete stack;
	
}

void StackTest::Test()
{
	std::cout << "========= Stack Test ==========" << std::endl;	
	
	stack = new key_ds::Stack<int>();
	
	Test_push();
	Test_pop();
	Test_stack_overflow();
	Test_pop_when_stack_is_empty();

}

void StackTest::Test_stack_overflow()
{	
	for (int i = 0; i <= MAX_STACK; i++)
	{
		if (!stack->Push((rand() % 100) + 1))
		{
			std::cout << "[StackTest] Test_stack_overflow Passed" << std::endl;
		}
	}	
}

void StackTest::Test_push()
{	
	if (stack->Push(10))
	{
		std::cout << "[StackTest] Test_push Passed" << std::endl;
	}
	else
	{
		std::cout << "[StackTest] Test_push Failed" << std::endl;
	}
}
void StackTest::Test_pop()
{
	auto data = stack->Peek();
	
	if (data == '\0')
	{
		std::cout << "[StackTest] Test_pop Failed" << std::endl;
	}
	else if (stack->Pop() == data)
	{
		std::cout << "[StackTest] Test_pop Passed" << std::endl;
	}
	else
	{
		std::cout << "[StackTest] Test_pop Failed" << std::endl;
	}
}
void StackTest::Test_pop_when_stack_is_empty()
{
	for (int i = MAX_STACK; i >= 0; i--)
	{
		if (stack->Pop() == '\0')
		{
			std::cout << "[StackTest] Test_pop_when_stack_is_empty Passed" << std::endl;
	
			return;
		}
	}
	std::cout << "[StackTest] Test_pop_when_stack_is_empty Failed" << std::endl;
}

