#include "Hash.h"


key_ds::Hash::Hash(unsigned int size)
{
	std::cout << "hash start" << std::endl;
	
	this->size = size;
	this->hashTable = new Node[this->size];
}

key_ds::Hash::~Hash()
{
	std::cout << "hash end" << std::endl;
	
	delete[] this->hashTable;
}
void key_ds::Hash::hash_insert(key_ds::HashSet* data)
{
	int key = this->get_hash_key(data->key);
	
	this->hashTable[key].chain.push_back(data);
	this->hashTable[key].count += 1;
}

key_ds::HashSet key_ds::Hash::hash_search(int key)
{
	key_ds::HashSet result;
	
	std::list<key_ds::HashSet*>::iterator iter;
	int _key = key_ds::Hash::get_hash_key(key);
	
	if (this->hashTable[_key].count > 0)
	{
		for (iter = this->hashTable[_key].chain.begin(); iter != this->hashTable[_key].chain.end(); iter++)
		{
			if ((*iter)->key == key)
			{
				result = *(*iter);
			}
		}
	}
	
	return result;
}

int key_ds::Hash::get_hash_key(int key)
{
	return key % this->size;
}

void key_ds::Hash::print_all()
{
	std::cout << " ===== print start =====" << std::endl;
	std::list<key_ds::HashSet*>::iterator iter;
	
	for (int i = 0; i < this->size; i++)
	{
		std::cout << "[ " << i << " ] linked list" << std::endl;
		for (iter = this->hashTable[i].chain.begin(); iter != this->hashTable[i].chain.end(); iter++)
		{
			std::cout << "	key : " << (*iter)->key << " |  data : " << (*iter)->data << std::endl;
		}
	}
	
	std::cout << " ===== print done =====" << std::endl;

}