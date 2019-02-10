#ifndef __STACK_H__
#define __STACK_H__

#include <iostream>

#define MAX_STACK 10


namespace key_ds
{
	template <typename T>
	class Stack
	{
		public:
			Stack();
			virtual ~Stack();

			bool Push(T value);
			T Peek();
			T Pop();
	private:
		unsigned int _current = 0;
		T* data;
	};
	
	#include "Stack.hpp"
}

#endif