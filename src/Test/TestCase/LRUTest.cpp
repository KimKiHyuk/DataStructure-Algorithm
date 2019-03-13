#include "header/LRUTest.h"
#include "../../Algorithm/LRU/LRU.h"


LRUTest::LRUTest()
{
}

LRUTest::~LRUTest()
{
	
}

void LRUTest::Test()
{
	key_al::LRU* a = new key_al::LRU();	
	std::cout << "LRUTest" << std::endl;
	
	delete a;
}