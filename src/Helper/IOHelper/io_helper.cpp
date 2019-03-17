#include "io_helper.h"


io_helper::io_helper(const char* char_file_name)
{
	std::string data = char_file_name;
	this->_input_stream.open(data);
}

io_helper::~io_helper()
{
	this->_input_stream.close();
}

std::string io_helper::read_txt_file()
{
	char _place_holder[4096];
	std::string input_str;
	
	if (_input_stream.is_open())
	{
		while (!_input_stream.eof())
		{
			_input_stream.getline(_place_holder, 4096);
			input_str.append(_place_holder);
			input_str.append("\n");
		}
	}

	return input_str;
}