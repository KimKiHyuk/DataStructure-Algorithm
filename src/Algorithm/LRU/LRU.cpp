#include "LRU.h"

key_al::LRU::LRU()
{
	io_helper file("/workspace/fucking-cplusplus/src/Algorithm/LRU/input.txt");

	unsigned int _determinator = 0;
	std::string element;
	std::stringstream stream;
	stream.str(file.read_txt_file());
	
	while (stream >> element)
	{
		std::stringstream conv;
		conv << element;
		if (_determinator % 2 == 0)
		{
			conv >> this->_cache_size;
		}
		else
		{
			conv >> this->_op;
			
			this->_place_holder.push_back(std::make_pair(this->_cache_size, this->_op));
		}
		
		_determinator += 1;
	}
	
	if (!this->check_data())
	{
		std::cout << "invaild data!" << std::endl;
		return;
	}
	
	// everything's ok, let's start
	
}

key_al::LRU::~LRU()
{
}

bool key_al::LRU::check_data()
{	
	for (auto iter : this->_place_holder)
	{
		if (!(iter.first >= 1 && iter.first <= 26))
		{
			return false;
		}
		
		for (auto s :iter.second)
		{
			if (s == '!')
			{
				continue;
			}
			
			if (!std::isupper(s))
			{
				return false;
			}
		}
	}
	
	return true;
}
void key_al::LRU::set_recent_node(char data)
{
	
	
}

void key_al::LRU::print_current()
{
}