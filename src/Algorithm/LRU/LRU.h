#ifndef __LRU_H__
#define __LRU_H__

#include "../../Helper/IOHelper/io_helper.h"
#include <iostream>
#include <list>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <typeinfo>

typedef std::list<char> cache;
namespace key_al
{	
	class LRU
	{
		public:
			LRU();
			virtual ~LRU();
			void task();
			void set_lru_when_hit(cache::const_iterator const_iter);
			void set_lru_when_full(char value);
			void print_current();
			bool check_data();
		
		private:
			std::list<char> _cache_list; 
			unsigned int _cache_size;
			std::string _op;
	};
}

#endif