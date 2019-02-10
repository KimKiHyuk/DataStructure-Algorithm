#ifndef __QUEUE_H__
#define __QUEUE_H__

#define MAX_QUEUE 10

namespace key_ds
{
	template <typename T>
	class Queue
	{
		public:
		Queue();
		virtual ~Queue();	
		T Put(T value);
		T Get();
		T Peek();
		
		private:
			unsigned int front = 0;
			unsigned int rear = 0;
			T* data;
	};

	#include "Queue.hpp"
}

#endif