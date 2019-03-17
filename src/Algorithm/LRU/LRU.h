#ifndef __LRU_H__
#define __LRU_H__

#include "../../Helper/IOHelper/io_helper.h"
#include <iostream>
#include <list>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

typedef std::list<char> cache;
namespace key_al
{	
	class LRU
	{
		public:
			LRU();
			virtual ~LRU();
			void set_recent_node(char data);
			void print_current();
			bool check_data();
		
		private:
			cache _cache_list; 
			unsigned int _cache_size;
			std::string _op;
			std::vector< std::pair<unsigned int, std::string> > _place_holder;
	};
}

#endif