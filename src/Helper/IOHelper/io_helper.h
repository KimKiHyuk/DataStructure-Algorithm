#ifndef __IO_HELPER_H__
#define __IO_HELPER_H__

#include <fstream>
#include <string>

class io_helper
{
	public:
		io_helper(const char* char_file_name = "src/Helper/IOHelper/sample.txt");
		~io_helper();
	
		std::string read_txt_file();
	
	private:
		std::ifstream _input_stream;
};

#endif