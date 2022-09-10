#include "lib.hpp"

double		input_practice_1_2()
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
		else if (is_fructional_input(line_char) == true)
		{
			return (atof(line_char));	
		}
		else if (is_fructional_input(line_char) == false)
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

int practice_1_2_rlz()
{
	double	a;
	double	b;

	ft_print_cout("Введите первое дробное число(вида x.y)");
	a = input_practice_1_2();
	ft_print_cout("Введите второе дробное число(вида x.y)");
	b = input_practice_1_2();
	std::cout << std::endl;
	std::cout << "Cумма дробных чисел = " << a + b << std::endl;
	std::cout << "Разность дробных чисел = " << a - b << std::endl;
	std::cout << "Произведение дробных чисел = " << a * b << std::endl;
	std::cout << "Деление дробных чисел = " << a / b << std::endl;
	return(0);
}
