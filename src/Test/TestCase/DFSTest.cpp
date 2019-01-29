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
	DFS<int> dfs(SIZE_OF_TEST_MAP, SIZE_OF_TEST_MAP);
	vector< vector<int> > graph;
	graph.resize(SIZE_OF_TEST_MAP);
	
	for (int y = 0; y < SIZE_OF_TEST_MAP; y++)
	{
		// for 2 dimensional vector initalize
		// graph.push_back(vector<int>());
		
		// or you can use resize method above
		
			
		for (int x = 0; x < SIZE_OF_TEST_MAP; x++)
		{
			graph[y].push_back(rand() % 500 + 100);
		}
	}
	
	dfs.PrintMap (graph);
	
	dfs.DFS_Stack(graph);
	dfs.DFS_Rec(graph);
}