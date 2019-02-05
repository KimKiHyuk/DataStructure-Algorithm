#include <iostream>
#include <cstdlib>
#include "header/DFSTest.h"
#include "../../Algorithm/DFS/DFS.h"

DFSTest::DFSTest()
{
	cout << "DFSTest start" << endl;
}
DFSTest::~DFSTest()
{
	cout << "DFSTest end" << endl;
}
void DFSTest::Test()
{
	DFS<int> dfs(1);
	vector< pair<int, int> > graph[MAX_NODE];
	
	graph[1].push_back(make_pair(2, 4));
	graph[1].push_back(make_pair(2, 3));
	graph[2].push_back(make_pair(3, 1));
	

	dfs.DFS_Stack(graph);
	dfs.DFS_Rec(graph);
	dfs.PrintMap(graph);
}