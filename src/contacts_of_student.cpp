#include "lib.hpp"

int contacts_of_student()
{
	int	a;

	while (true)
	{
		std::cout << std::endl;
		ft_print_cout("Контакты");
		std::cout << std::endl;
		ft_print_cout("Нажмите 1 для того, чтобы перейти на ОСНОВНУЮ СТРАНИЦУ");
		ft_print_cout("Нажмите 2 для того, чтобы чтобы ВЫЙТИ ИЗ ПРОГРАММЫ");
		a = ft_input();
		if (a == 1)
		{
			if (main_page() != 0)
			{
				ft_print_cout("contacts_of_student -> error main page");
				std::exit(1);
			}
		}
		else if (a == 2)
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

