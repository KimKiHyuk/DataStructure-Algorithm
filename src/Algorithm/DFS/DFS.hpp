template <typename T>
DFS<T>::DFS(int x, int y)
{
	this->x = x;
	this->y = y;
	
	this->isVisited = new bool[this->x  *  this->y];
	
	fill(this->isVisited, this->isVisited + this->x * this->y, false);
	
	cout << "DFS Start"	<< endl;
}

template <typename T>
DFS<T>::~DFS()
{
	delete[] isVisited;
	
	cout << "DFS End" << endl;
}

template <typename T>
void DFS<T>::DFS_Stack (vector< vector<T> > &graph)
{
	for (int y = 0; y < this->y; y++)
	{
		for (int x = 0; x < this->x; x++)
		{
		}
	}
}

template <typename T>
void DFS<T>::DFS_Rec (int x, int y, vector< vector<T> > &graph)
{
	
	isVisited[y * 10 + x] = true;
	
	if (y < this->y - 1)
	{
		DFS_Rec(x, y + 1, graph);
	}
	
	if (x < this->x - 1)
	{
		DFS_Rec(x + 1, y, graph);
	}
}

template <typename T>
void DFS<T>::PrintMap (vector< vector<T> > &graph)
{
	
	for (int y = 0; y < this->y; y++)
	{
		cout << "↓ ";
		for (int x = 0; x < this->x; x++)
		{
			if (this->isVisited[y * 10 + x])
			{	
				cout << " \033[1;31m[ " << graph[y][x] << " ] " << "\033[0m" << "-> ";		
			}
			else
			{
				cout << " [ " << graph[y][x] <<  " ] -> ";
			}
			
		}
		
		cout << endl;
	}
	
	cout << "\n" << endl;
}