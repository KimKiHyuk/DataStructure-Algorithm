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
	
	print_all();
}

int key_ds::Hash::get_hash_key(int key)
{
	return key % this->size;
}

void key_ds::Hash::print_all()
{
	std::cout << " ===== print head =====" << std::endl;
	std::list<key_ds::HashSet*>::iterator iter;
	
	for (int i = 0; i < this->size; i++)
	{
		for (iter = this->hashTable[i].chain.begin(); iter != this->hashTable[i].chain.end(); iter++)
		{
			std::cout << "key : " << (*iter)->key << std::endl;
			std::cout << "data : " << (*iter)->data << std::endl;
		}
	}
	
	std::cout << " ===== print done =====" << std::endl;

}