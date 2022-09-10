#include "lib.hpp"

int practice_1_1_menu()
{
	int a;

	while (true)
	{
		std::cout << std::endl;
		ft_print_cout("Нажмите 1 - Список номеров ПРАКТИКУМА 1");
		a = ft_input();
		if (a == 1)
		{
			if (practice_1() != 0)
			{
				ft_print_cout("error practice_1");
				std::exit(1);
			}
		}
		else if ((a < 1) || (a > 1))
		{
			ft_print_cout("Ошибка!Введите требуемое число");
		}
		else
		{
			ft_print_cout("error ft_practice_1_1menu");
			exit(1);
		}
	}
	return (1);
}

int practice_1_1()
{
	ft_print_cout("Практикум 1_1");
	if (practice_1_1_rlz() != 0)
	{
		ft_print_cout("error practice_1_1_rlz");
		std::exit(1);
	}
	print_rlz();
	if (practice_1_1_menu() != 0)
	{
		ft_print_cout("error practice_1_1_rlz");
		exit(1);
	}
	return (1);
}