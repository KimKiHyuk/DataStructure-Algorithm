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

void HashTest::Test()
{
	std::cout << "========= Hash test Test ==========" << std::endl;
	
	key_ds::Hash* h = new key_ds::Hash(5);
	key_ds::HashSet set[30];
	set[0].key = 1;
	set[0].data = 'a';
	set[1].key = 2;
	set[1].data = 'b';
	
	InsertTest(h, &set[0]);
	InsertTest(h, &set[1]);
	
	delete h;
		
}
