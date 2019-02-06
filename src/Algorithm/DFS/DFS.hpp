template <typename T>
DFS<T>::DFS(T start)
{
	this->start = start;
	
	this->isVisited = new bool[100];
	
	fill(this->isVisited, this->isVisited + 100, false);
	
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
	cout << graph[1][1].first << endl;
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