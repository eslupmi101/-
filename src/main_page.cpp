#include "lib.hpp"

int main_page()
{
	int a;

	while (true)
	{
		ft_print_cout("Практикумы по программированию на языке C++");
		std::cout << std::endl;
		ft_print_cout("Студент: Андреев Айсен Александрович ПМИ-22-2");
		ft_print_cout("Содержит 1 ПРАКТИКУМ");
		ft_print_cout("v 0.0.1");
		std::cout << std::endl;
		ft_print_cout("Нажмите 1 - СПИСОК ГОТОВЫХ ПРАКТИКУМОВ");
		ft_print_cout("Нажмите 2 - КОНТАКТЫ СТУДЕНТА");
		ft_print_cout("Нажмите 3 - ВЫЙТИ ИЗ ПРОГРАММЫ");
		std::cout << std::endl;
		a = ft_input();
		if (a == 1)
		{
			if (list_of_practicums() != 0)
				ft_print_cout("error list_of_practicims");
		}
		else if (a == 2)
		{
			if (contacts_of_student() != 0)
				ft_print_cout("error contacts_of_student");
		}
		else if (a == 3)
		{
			ft_print_cout("Досвидания!");
			std::exit(0);
		}
		else if ((a < 1) || (a > 3))
		{
			ft_print_cout("Ошибка!Введите требуемое число");
		}
		else
		{
			ft_print_cout("error main_page");
			return (1);
		}
	}
	return (1);
}