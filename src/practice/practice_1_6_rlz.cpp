#include "lib.hpp"
int			count_S();

double		input_practice_1_6()
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

void		menu_count_S()
{
	int	a;

	std::cout << "Нажмите 1 - Ввести другие координаты" << std::endl;
	std::cout << "Нажмите 2 - Выйти" << std::endl;
	a = ft_input();
	if (a == 1)
		count_S();
	else if (a == 2)
		practice_1();
	else
	{
		std::cout << "Ошибка! Введите допустимое число" << std::endl;
		menu_count_S();
	}
}	

int			count_S()
{
	double	x0, y0, x1, y1, x2, y2, a, b, c, p;

	ft_print_cout("Введите координату X вершины A");
	x0 = input_practice_1_6();
	ft_print_cout("Введите координату Y вершины A");
	y0 = input_practice_1_6();
	ft_print_cout("Введите координату X вершины B");
	x1 = input_practice_1_6();
	ft_print_cout("Введите координату Y вершины B");
	y1 = input_practice_1_6();
	ft_print_cout("Введите координату X вершины C");
	x2 = input_practice_1_6();
	ft_print_cout("Введите координату Y вершины C");
	y2 = input_practice_1_6();
	a = sqrt((x1-x0)*(x1-x0) + (y1-y0)*(y1-y0));
	b = sqrt((x2-x0)*(x2-x0) + (y2-y0)*(y2-y0));
	c = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	if (!(a<b+c && b<a+c && c<a+b))
    {
        std::cout << "Такого треугольника не существует! Введите допустимые координаты!" << std::endl;
		menu_count_S();
    } 
    else if (a==b || b==c || a==c)
    {
        std::cout << "Треугольник равнобедренный" << std::endl;
		p = (a+b+c)/2;
		std::cout << "S = " << sqrt(p*(p-a)*(p-b)*(p-c)) << std::endl;
		// std::cout << "S = " << fabs((x1-x0)*(y2-y0)-(x2-x0)*(y1-y0))/2 << std::endl;
		// std::cout << "S = " << fabs((x1-x2)*(y0-y2)-(x0-x2)*(y1-y2))/2 << std::endl;
		return (0);
	}
    else
    {
        std::cout <<"Треугольник не является равнобедренным. Введите допустимые координаты!"  << std::endl;
		menu_count_S();
    }
	return (1);	
}

int 		practice_1_6_rlz()
{
	ft_print_cout("Введите координаты вершин равнобедренного треугольника");
	if (count_S() != 0)
	{
		ft_print_cout("error practice_1_6_rlz");
		exit (1);
	}
	return(0);
}
