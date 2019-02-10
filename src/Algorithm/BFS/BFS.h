#ifndef __BFS_H__
#define __BFS_H__

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

#define MAX_NODE 100
#define VISIT_SIZE 1000


namespace key_al
{
	template <typename T> 
	class BFS
	{
		public:
			BFS(T start);
			virtual ~BFS();
	
			void BFS_Queue (std::vector< std::pair<int, T> > *graph);
		private:
			T start;
			bool * isVisited;
			std::queue<T> bfsQueue;
	};

	#include "BFS.hpp"
}
#endif