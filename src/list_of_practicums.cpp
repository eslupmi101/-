#include "lib.hpp"

int list_of_practicums()
{
	int a;

	while (true)
	{
		std::cout << std::endl;
		ft_print_cout("Список практикумов:");
		std::cout << std::endl;
		ft_print_cout("№1 ПРАКТИКУМ");
		std::cout << std::endl;
		ft_print_cout("Нажмите 1 - №1 ПРАКТИКУМ");
		ft_print_cout("Нажмите 2 - ОСНОВНАЯ СТРАНИЦУ");
		ft_print_cout("Нажмите 3 - ВЫЙТИ ИЗ ПРОГРАММЫ");
		a = ft_input();
		if (a == 1)
		{
			if (practice_1() != 0)
			{
				ft_print_cout("list_of_practicums() -> practice_1()");
				std::exit(1);
			}
		}
		else if (a == 2)
		{
			if (main_page() != 0)
			{
				ft_print_cout("list_of_practicums() -> main_page");
				std::exit(1);
			}
		}
		else if (a == 3)
		{
			ft_print_cout("Досвидания!");
			std::exit(0);
		}
		else
		{
			ft_print_cout("Ошибка!Введите требуемое число");
		}
	}
	return (1);
}