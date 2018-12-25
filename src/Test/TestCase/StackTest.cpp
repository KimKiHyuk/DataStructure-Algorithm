#include <iostream>
#include "header/StackTest.h"

using namespace std;

template class StackTest<int>; 

template <typename T>
StackTest<T>::StackTest(void)
{
	cout << "Stack Test Start" << endl;
}

template <typename T>
StackTest<T>::~StackTest()
{
	cout << "Stack Test Disposed" << endl;
}

template <typename T>
void StackTest<T>::Test()
{
	cout << "Stack Test" << endl;
}



