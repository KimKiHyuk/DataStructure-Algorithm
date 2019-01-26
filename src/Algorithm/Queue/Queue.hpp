template <typename T>
Queue<T>::Queue()
{
	data = new T[MAX_QUEUE];
}

template <typename T>
Queue<T>::~Queue()
{
	cout << "Queue end" << endl;
	delete[] data;
}

template <typename T>
T Queue<T>::Put(T value)
{
	if (front >= MAX_QUEUE)
	{
		return '\0';
	}
	
	data[front++] = value;
	
	return value;
}


template <typename T>
T Queue<T>::Peek()
{
	if (front < rear)
	{
		return '\0';
	}
	else
	{
		return data[rear];
	}
}

template <typename T>
T Queue<T>::Get()
{
	if (Peek() != '\0')
	{
		return data[rear++];
	}
	else
	{
		return '\0';
	}
}
