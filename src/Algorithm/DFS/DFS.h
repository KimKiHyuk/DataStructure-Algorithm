#ifndef __DFS_H__
#define __DFS_H__

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

#define MAX_NODE 100

using namespace std;

template <typename T> 
class DFS
{
	public:
		DFS(T start);
		virtual ~DFS();
	
		void DFS_Stack (vector< pair<T, T> > *graph);
		void DFS_Rec (vector< pair<T, T> > *graph);
		void PrintMap (vector< pair<T, T> > graph[MAX_NODE]);
	private:
		T start;
		bool * isVisited;
		stack<T> dfsStack;
	
};

#include "DFS.hpp"

#endif