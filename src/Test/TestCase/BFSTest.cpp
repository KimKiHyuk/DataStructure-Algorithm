#include "header/BFSTest.h"
#include "../../Algorithm/BFS/BFS.h"

BFSTest::BFSTest()
{
	std::cout << "BFSTest Initalized" << std::endl;
}
BFSTest::~BFSTest()
{
	std::cout << "BFSTest Disposed" << std::endl;
}
void BFSTest::Test()
{
	std::cout << "========= BFS Test ==========" << std::endl;
	key_al::BFS<int> bfs(1);
	
	std::vector< std::pair<int, int> > graph[MAX_NODE];
	
	graph[1].push_back(std::make_pair(2, 1));
	graph[1].push_back(std::make_pair(3, 1));
	graph[2].push_back(std::make_pair(4, 1));
	graph[2].push_back(std::make_pair(5, 1));
	graph[4].push_back(std::make_pair(6, 1));
	graph[5].push_back(std::make_pair(7, 1));
	
	// (6), (7) <- (4(has 6)), (5(has 7)) <- (2) <- (1) -> (3)
	// so as a result.. it should be 1 -> 2 -> 3 -> 4 -> 5 -> 6 ->7
	bfs.BFS_Queue(graph);
	
	
}