#ifndef __DFS_H__
#define __DFS_H__

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

#define MAX_NODE 100
#define VISIT_SIZE 1000

namespace key_al
{
	template <typename T> 
	class DFS
	{
		public:
		DFS(T start);
		virtual ~DFS();
	
		void DFS_Stack (std::vector< std::pair<int, T> > *graph);
		void DFS_Rec (std::vector< std::pair<int, T> > *graph, T currentNode);
	private:
		T start;
		bool * isVisited;
		std::stack<T> dfsStack;
	
	};

	#include "DFS.hpp"
}


#endif