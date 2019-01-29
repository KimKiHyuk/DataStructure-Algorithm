#ifndef __DFS_H__
#define __DFS_H__

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

template <typename T> 
class DFS
{
	public:
		DFS(int x, int y);
		virtual ~DFS();
	
		void DFS_Stack (vector< vector<T> > &graph);
		void DFS_Rec (vector< vector<T> > &graph);
		void PrintMap (vector< vector<T> > &graph);
	private:
		int x;
		int y;
		bool * isVisited;
		stack<T> dfsStack;
	
};

#include "DFS.hpp"

#endif