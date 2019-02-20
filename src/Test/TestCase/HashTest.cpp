#include "header/HashTest.h"
#include "../../DataStructure/Hash/Hash.h"

HashTest::HashTest()
{
	std::cout << "Hash Initalized" << std::endl;
}
HashTest::~HashTest()
{
	std::cout << "Hash Disposed" << std::endl;
}

void InsertTest(key_ds::Hash* table, key_ds::HashSet* data)
{
	std::cout << "key : " << data->key << std::endl;
	std::cout << "data : " << data->data << std::endl;
	table->hash_insert(data);
}

void SearchTest(key_ds::Hash* h, int key)
{
	auto x = h->hash_search(key);
	
	if ((*x)->key != -1)
		std::cout << "found key : " << (*x)->key << " | found data : " << (*x)->data << std::endl;
	else
	{
		std::cout << "cannot find key { " << key << " } " << std::endl;
	}
}

void DeleteTest(key_ds::Hash* h, int key)
{
	std::cout << "deleting key : " << key << " | " << h->hash_delete(key) << std::endl;
}

void HashTest::Test()
{
	std::cout << "========= Hash test Test ==========" << std::endl;
	
	key_ds::Hash* h = new key_ds::Hash(10);
	key_ds::HashSet set[26];
	
	char alpha = 'a';
	for (int i = 0; i < sizeof(set) / sizeof(set[0]); i++)
	{
		set[i].key = i;
		set[i].data = alpha++;
		InsertTest(h, &set[i]);
	}
	
	h->print_all();
	
	SearchTest(h, 3);	
	SearchTest(h, 7);
	SearchTest(h, 1);
	SearchTest(h, 50);
	
	DeleteTest(h, 9);
	DeleteTest(h, 19);
	h->print_all();
	DeleteTest(h, 50);
	h->print_all();


	delete h;
		
}
