template <typename T>
BFS<T>::BFS(T start)
{
	cout << "BFS start" << endl;
	this->start = start;
	this->isVisited = new bool[VISIT_SIZE];
	
	fill(isVisited, isVisited + VISIT_SIZE, false);
	
}
template <typename T>
BFS<T>::~BFS()
{
	cout << "BFS end" << endl;
	delete[] isVisited;
}
template <typename T>
void BFS<T>::BFS_Queue(vector< pair<T, T> > *graph)
{
	bfsQueue.push(this->start);
	
	while (!bfsQueue.empty())
	{
		T current = bfsQueue.front();
		bfsQueue.pop();
		
		if (!isVisited[current])
		{
			isVisited[current] = true;
			cout << " [ " << current << " ]";
		}
		
		for (int i = 0; i < graph[current].size(); i++)
		{
			bfsQueue.push(graph[current][i].first);

		}
	}
	
	cout << endl;
}