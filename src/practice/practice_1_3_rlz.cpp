#include "lib.hpp"

double		input_practice_1_3()
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

int			count_discriminat(double a, double b, double c)
{
	double	dscr;

	dscr = (b*b) - (4 * a * c);
	if (dscr < 0)
		return (-1);
	else if (dscr == 0)
		return (0);
	else if (dscr > 0)
		return (2);
	return (1);
}

int		count_quadratic_equation(double a, double b, double c)
{
	double	discr;
	
	discr = (b * b) - (4 * a * c);
	std::cout << "x1 = " << ((-b) + (pow(discr, 1/2))) / (2 * a) << std::endl;
	std::cout << "x2 = " << ((-b) - (pow(discr, 1/2))) / (2 * a) << std::endl;
	return (0);
}

int			 ft_input_a_b_c()
{
	double	a;
	double	b;
	double	c;
	int		discr;

	ft_print_cout("Введите число a");
	a = input_practice_1_3();
	ft_print_cout("Введите число b");
	b = input_practice_1_3();
	ft_print_cout("Введите число с");
	c = input_practice_1_3();
	discr = count_discriminat(a, b, c);
	if (discr == -1)
	{
		ft_print_cout("Нет решения. Дискриминант меньше 0");
		return (0);
	}
	else if (discr == 0)
	{
		std::cout << "x = " << (-b) / (2 * a) << std::endl;
		return (0);
	}
	else if (discr == 2)
	{
		if (count_quadratic_equation(a, b, c) != 0)
		{
			std::cout << "Ошибка!  ft_input_a_b_c" << (-b) / (2 * a) << std::endl;
			exit (1);
		}
	}
	else
	{
		ft_print_cout("error ft_input_a_b_c");
		return (1);
	}
	return(0);
}

int 		practice_1_3_rlz()
{
	ft_print_cout("ax^2 + b + c = 0");
	if (ft_input_a_b_c() != 0)
	{
		ft_print_cout("error practice_1_3_rlz");
		exit (1);
	}
	return(0);

}
