#include "LRU.h"

key_al::LRU::LRU()
{
	unsigned int trial = 0;
	
	while (this->check_data())
	{
		// everything's ok, let's start
		this->_cache_list.clear();
		std::cout << "Simulation " << ++trial << std::endl;
		this->task();
	}
	
}

key_al::LRU::~LRU()
{
	
}

bool key_al::LRU::check_data()
{
	std::string s;
	std::getline(std::cin, s);
	std::stringstream stream;
	stream.str(s);
	
	stream >> this->_cache_size;
	if (!(this->_cache_size >= 1 && this->_cache_size <= 26))
	{
		return false;
	}		
	
	stream >> this->_op;
	for (auto s : this->_op)
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

	return true;
}

void key_al::LRU::task()
{
	unsigned int _fixed_array_size = 0; // because of STL auto array size scale
	for (auto iter : this->_op)
	{	
		if (iter == '!')
		{
			this->print_current();
			continue;
		}
		
		auto found_hit = std::find(this->_cache_list.cbegin(), this->_cache_list.cend(), iter);
		

		if (found_hit != this->_cache_list.end())
		{
			this->set_lru_when_hit(found_hit);
		}
		else
		{
			if (_fixed_array_size < this->_cache_size)
			{
				_fixed_array_size += 1;
				this->_cache_list.push_back(iter);
			}
			else
			{
				this->set_lru_when_full(iter);
			}
		}
	}
}

void key_al::LRU::set_lru_when_hit(cache::const_iterator const_iter)
{
	if (this->_cache_list.back() == *const_iter)
	{
		return;
	}
	
	this->_cache_list.erase(const_iter);
	this->_cache_list.push_back(*const_iter);
	
}

void key_al::LRU::set_lru_when_full(char value)
{
	this->_cache_list.pop_front();
	this->_cache_list.push_back(value);
}

void key_al::LRU::print_current()
{
	for(auto var : this->_cache_list)
	{
		std::cout << var;
	}
	
	std::cout << std::endl;
}