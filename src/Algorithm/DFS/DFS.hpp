template <typename T>
DFS<T>::DFS(T start)
{
	this->start = start;
	
	this->isVisited = new bool[VISIT_SIZE];
	
	std::fill(this->isVisited, this->isVisited + VISIT_SIZE, false);
}

template <typename T>
DFS<T>::~DFS()
{
	delete[] isVisited;
}

template <typename T>
void DFS<T>::DFS_Stack (std::vector< std::pair<int, T> > *graph)
{
	std::stack<T> nodes;
	nodes.push(this->start);
	
	while(!nodes.empty())
	{
		T currentNode = nodes.top();
		nodes.pop();
		if (!isVisited[currentNode])
		{
			isVisited[currentNode] = true;
			std::cout << " [ " << currentNode << " ]";
		}
		
		for (int i = graph[currentNode].size() - 1; i >= 0 ; i--)
		{
			nodes.push(graph[currentNode][i].first);
		}
	}
	
	std::fill (isVisited, isVisited + VISIT_SIZE, false);
	std::cout << std::endl;
}

template <typename T>
void DFS<T>::DFS_Rec (std::vector< std::pair<int, T> > *graph, T currentNode)
{	
	if (!isVisited[currentNode])
	{
		isVisited[currentNode] = true;
		std::cout << " [ " << currentNode << " ]";
	}
	
	if (!graph[currentNode].empty())
	{
		for (int i = 0; i < graph[currentNode].size(); i++)
		{
			DFS_Rec(graph, graph[currentNode][i].first);
		}
	}
}