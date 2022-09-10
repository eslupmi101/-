#include "lib.hpp"

int	input_practice_1_5()
{
	std::string	line_string;
	const char*	line_char;
	double		a;

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
			a = (atof(line_char));
			if (a <= 0)
				ft_print_cout("Ошибка, число отрицательное! Введите требуемое число");
			else
			{
				std::cout << "Квадратный корень числа " << a << " = "  << pow(a, 1.0 / 2.0) << std::endl;
				std::cout << "Кубический корень числа " << a << " = " << pow(a, 1.0 / 3.0) << std::endl;
				return (0);
			}	
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

int practice_1_5_rlz()
{
	ft_print_cout("Введите число");
	if (input_practice_1_5() != 0)
	{
		ft_print_cout("error practice_1_4_rlz");
		exit (1);
	}
	return(0);
}
