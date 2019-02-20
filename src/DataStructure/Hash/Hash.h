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
		
		HashSet()
		{
			key = -1;
			data = -1;
		}
	}HashSet;
	
	typedef struct Node
	{
		int count;
		std::list<HashSet*> chain;
		
		Node()
		{
			count = 0;
		}
	}Node;
	
	class Hash
	{
		public:
			Hash(unsigned int size);
			virtual ~Hash();
			std::list<key_ds::HashSet*>::iterator 						hash_search(int key);
			void hash_insert(HashSet* data);
			bool hash_delete(int key);
			void print_all();
			int get_hash_key(int key);
		private:
			unsigned int size;
			Node* hashTable;
	};
}

#endif