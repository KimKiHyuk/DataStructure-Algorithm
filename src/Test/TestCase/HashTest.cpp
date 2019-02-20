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
	
	if (x.key != -1)
		std::cout << "found key : " << x.key << " | found data : " << x.data << std::endl;
	else
	{
		std::cout << "cannot find key { " << key << " } " << std::endl;
	}
}

void HashTest::Test()
{
	std::cout << "========= Hash test Test ==========" << std::endl;
	
	key_ds::Hash* h = new key_ds::Hash(10);
	key_ds::HashSet set[20];
	
	set[0].key = 1;
	set[0].data = 'a';
	set[1].key = 2;
	set[1].data = 'b';
	set[2].key = 7;
	set[2].data = 'c';
	
	InsertTest(h, &set[0]);
	InsertTest(h, &set[1]);
	InsertTest(h, &set[2]);
	
	h->print_all();
	
	SearchTest(h, 3);	
	SearchTest(h, 7);
	SearchTest(h, 1);
	

	delete h;
		
}
