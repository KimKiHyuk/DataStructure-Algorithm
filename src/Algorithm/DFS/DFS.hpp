template <typename T>
DFS<T>::DFS(T start)
{
	this->start = start;
	
	this->isVisited = new bool[VISIT_SIZE];
	
	fill(this->isVisited, this->isVisited + VISIT_SIZE, false);
	
	cout << "DFS Start"	<< endl;
}

template <typename T>
DFS<T>::~DFS()
{
	delete[] isVisited;
	
	cout << "\nDFS End" << endl;
}

template <typename T>
void DFS<T>::DFS_Stack (vector< pair<T, T> > *graph)
{
	stack<T> nodes;
	nodes.push(this->start);
	
	while(!nodes.empty())
	{
		T currentNode = nodes.top();
		nodes.pop();
		if (!isVisited[currentNode])
		{
			isVisited[currentNode] = true;
			cout << " [ " << currentNode << " ]";
		}
		
		for (int i = graph[currentNode].size() - 1; i >= 0 ; i--)
		{
			nodes.push(graph[currentNode][i].first);
		}
	}
	
	fill (isVisited, isVisited + VISIT_SIZE, false);
	cout << endl;
}

template <typename T>
void DFS<T>::DFS_Rec (vector< pair<T, T> > *graph, T currentNode)
{	
	if (!isVisited[currentNode])
	{
		isVisited[currentNode] = true;
		cout << " [ " << currentNode << " ]";
	}
	
	if (!graph[currentNode].empty())
	{
		for (int i = 0; i < graph[currentNode].size(); i++)
		{
			DFS_Rec(graph, graph[currentNode][i].first);
		}
	}
}

template <typename T>
void DFS<T>::PrintMap (vector< pair<T, T> > graph[MAX_NODE])
{
}