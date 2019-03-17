#include "FileHelperTest.h"
#include "../../../Helper/IOHelper/io_helper.h"



FileHelperTest::FileHelperTest()
{
}

FileHelperTest::~FileHelperTest()
{
}

bool read_file_text()
{
	PRINT_TEST_NAME;
	
	io_helper helper;
	std::string result = helper.read_txt_file();

	if (result.empty())
	{
		return false;
	}
	
	return true;
	
	
}

bool write_file_text()
{
	PRINT_TEST_NAME;
	return false;
}


void FileHelperTest::Test() // Test(method1, method2..) 이런식으로 해서 abstract 하면 코드 줄 듯.
{
	/*
	typedef bool (*tests)();
	tests funcs[] = {read_file_text, write_file_text};
	*/
	
	// OR
	
	bool (*funcs[])() = {read_file_text, write_file_text};
	
	for(auto test : funcs)
	{
		std::cout << (test() ? "true" : "false") << std::endl;
	}	
}