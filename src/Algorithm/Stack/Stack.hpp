template <typename T>
Stack<T>::Stack()
{	
	data = new T[MAX_STACK]; 
}

template <typename T>
Stack<T>::~Stack()
{
	Clear(0, true);
	cout << "Stack end" << endl;
}

template <typename T>
T Stack<T>::Peek()
{
	if (_current > 0)
	{
		if (data[_current - 1] != '\0')
		{
			return data[_current - 1];
		}
		else
		{
			return '\0';	
		}
	}
	
	return '\0';
	
}

template <typename T>
bool Stack<T>::Push(T value)
{
	if (MAX_STACK > _current)
	{
		*(data + _current) = value;
		_current += 1;
		
		return true;
	}
	
	return false;
}

template <typename T>
T Stack<T>::Pop()
{
	T ret = Peek();
	
	if (ret != '\0')
	{
		Clear(_current - 1, false);
		return ret;
	}
	else
	{
		return '\0';
	}

}
template <typename T>
void Stack<T>::Clear (unsigned int index, bool all_clear)
{	
	if (all_clear)
	{
		delete[] data; // TO DO , change it using smart pointer
	}
	else
	{
		data[_current] = '\0';
		_current -= 1;
	}
}



