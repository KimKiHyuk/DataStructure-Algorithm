#include "header/DFSTest.h"
#include "../../Algorithm/DFS/DFS.h"

DFSTest::DFSTest()
{
	std::cout << "DFSTest Initalized" << std::endl;
}
DFSTest::~DFSTest()
{
	std::cout << "\nDFSTest Disposed" << std::endl;
}
void DFSTest::Test()
{
	std::cout << "========= DFS Test ==========" << std::endl;
	key_al::DFS<int> dfs(1);
	std::vector< std::pair<int, int> > graph[MAX_NODE];
	
	graph[1].push_back(std::make_pair(2, 1));
	graph[1].push_back(std::make_pair(3, 1));
	graph[2].push_back(std::make_pair(4, 1));
	graph[2].push_back(std::make_pair(5, 1));
	graph[4].push_back(std::make_pair(6, 1));
	graph[5].push_back(std::make_pair(7, 1));
	
	// (6), (7) <- (4(has 6)), (5(has 7)) <- (2) <- (1) -> (3)
	// so as a result.. it should be 1 -> 2 -> 4 -> 6 -> 5 -> 7 -> 3
	
	dfs.DFS_Stack(graph);
	dfs.DFS_Rec(graph, 1);
}