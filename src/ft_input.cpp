#include "lib.hpp"

bool	is_digit_input(const char* line)
{
	for (size_t i = 0; i != (strlen(line)); i++)
	{
		if (line[i] <= 46 || line[i] >= 58)
			return (false);
	}
	return (true);
}

int		ft_input()
{
	std::string	line_string;
	const char*	line_char;

	while (true)
	{
		getline(std::cin, line_string);
		line_char = line_string.c_str();
		if (!std::cin)
		{
			break;
		}
		else if (is_digit_input(line_char) == true)
		{
			return (atoi(line_char));	
		}
		else if (is_digit_input(line_char) == false)
		{
			ft_print_cout("Ошибка!Введите требуемое число");
		}
		else
		{
			ft_print_cout("error ft_input 1");
			exit (1);
		}
	}
	ft_print_cout("error ft_input 2");
	exit (1);
}