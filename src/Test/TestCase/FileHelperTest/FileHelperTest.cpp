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


void FileHelperTest::Test()
{
	typedef bool (*tests)();
	tests funcs[] = {read_file_text, write_file_text};
	
	for(int i = 0; i < sizeof(funcs)/ sizeof(tests); i++)
	{
		std::cout << (funcs[i]() ? "true" : "false") << std::endl;
	}

	
}