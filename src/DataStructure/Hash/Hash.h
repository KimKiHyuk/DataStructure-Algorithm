#ifndef __HASH_H__

#include <list>
#include <iostream>
#include <algorithm>

#define MAX_HASH_TABLE_SIZE 20

namespace key_ds
{
	typedef struct HashSet
	{	
		int key;
		char data;
		
	}HashSet;
	
	typedef struct Node
	{
		int count = 0;
		std::list<HashSet*> chain;
	}Node;
	
	class Hash
	{
		public:
			Hash(unsigned int size);
			virtual ~Hash();
			void hash_search(int key);
			void hash_insert(HashSet* data);
			void hash_delete(int key);
			void print_all();
			int get_hash_key(int key);
		private:
			unsigned int size;
			Node* hashTable;
	};
}

#endif