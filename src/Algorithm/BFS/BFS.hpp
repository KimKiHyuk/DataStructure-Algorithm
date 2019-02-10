template <typename T>
BFS<T>::BFS(T start)
{
	this->start = start;
	this->isVisited = new bool[VISIT_SIZE];
	
	std::fill(isVisited, isVisited + VISIT_SIZE, false);
	
}
template <typename T>
BFS<T>::~BFS()
{
	delete[] isVisited;
}
template <typename T>
void BFS<T>::BFS_Queue(std::vector< std::pair<int, T> > *graph)
{
	bfsQueue.push(this->start);
	
	while (!bfsQueue.empty())
	{
		T current = bfsQueue.front();
		bfsQueue.pop();
		
		if (!isVisited[current])
		{
			isVisited[current] = true;
			std::cout << " [ " << current << " ]";
		}
		
		for (int i = 0; i < graph[current].size(); i++)
		{
			bfsQueue.push(graph[current][i].first);

		}
	}
	
	std::cout << std::endl;
}