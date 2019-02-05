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
	
	cout << "DFS End" << endl;
}

template <typename T>
void DFS<T>::DFS_Stack (vector< pair<T, T> > *graph)
{
	for (int i = 0; i < MAX_NODE; i++)
	{
		if (!graph[i].empty())
		{
			cout << i << " vector is avaliable" << endl; 
		}

	}
}

template <typename T>
void DFS<T>::DFS_Rec (vector< pair<T, T> > *graph)
{
		for (int i = 0; i < MAX_NODE; i++)
	{
		if (!graph[i].empty())
		{
			cout << i << " vector is avaliable" << endl; 
		}

	}
}

template <typename T>
void DFS<T>::PrintMap (vector< pair<T, T> > graph[MAX_NODE])
{
	for (int i = 0; i < MAX_NODE; i++)
	{
		if (!graph[i].empty())
		{
			cout << i << " vector is avaliable" << endl; 
		}

	}
	// cout << " \033[1;31m[ " << graph[y][x] << " ] " << "\033[0m" << "-> ";		
}