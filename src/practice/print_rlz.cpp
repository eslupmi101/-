#include "lib.hpp"

int print_rlz()
{
	std::string 	path = "practice_1_1_rlz.txt";
	std::string 	text;
	std::fstream	fs;

	fs.open(path, std::fstream::in | std::fstream::out |std::fstream::app);
	if (!fs.is_open())
	{
		ft_print_cout("error");
		return (1);
	}
	else
	{
		while (!fs.eof())
		{
			text = "";
			fs >> text;
			std::cout << text << std::endl;
		}
		fs.close();
	}
	return (0);
}