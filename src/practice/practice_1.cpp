#include "lib.hpp"

int practice_1_menu()
{
	int a;

	while (true)
	{
		std::cout << std::endl;
		ft_print_cout("№1 Написать программу которая выводит ваше ФИО и число, месяц и год рождения. Число и год должны быть переменными типа int.");
		ft_print_cout("№2 Написать программу, которая считывает с экрана два дробных числа и выводит их сумму, разность, умножение и деление.");
		ft_print_cout("№3 Написать программу для решения квадратного уравнения ax2+bx+c=0. На ввод даются числа a,b,c. Вывести корни уравнения.");
		ft_print_cout("№4 Ввести шестизначное целое число и вывести его первую цифру.");
		ft_print_cout("№5 Ввести число, найти и вывести его квадратный и кубический корень.");
		ft_print_cout("№6 Даны координаты трёх точек равнобедренного треугольника, найти и вывести площадь треугольника.");
		std::cout << std::endl;
		ft_print_cout("Нажмите 1 - №1");
		ft_print_cout("Нажмите 2 - №2");
		ft_print_cout("Нажмите 3 - №3");
		ft_print_cout("Нажмите 4 - №4");
		ft_print_cout("Нажмите 5 - №5");
		ft_print_cout("Нажмите 6 - №6");
		ft_print_cout("Нажмите 7 - СПИСОК ПРАКТИКУМОВ");
		ft_print_cout("Нажмите 8 - ОСНОВНАЯ СТРАНИЦА");
		ft_print_cout("Нажмите ESC - ВЫЙТИ ИЗ ПРОГРАММЫ");
		a = ft_input();
		if (a == 1)
		{
			if (practice_1_1() != 0)
			{
				ft_print_cout("error practice_1_menu -> practice_1_1");
				std::exit(1);
			}
		}
		if (a == 2)
		{
			if (practice_1_2() != 0)
			{
				ft_print_cout("error practice_1_menu -> practice_1_2");
				std::exit(1);
			}
		}
		if (a == 3)
		{
			if (practice_1_3() != 0)
			{
				ft_print_cout("error practice_1_menu -> practice_1_3");
				std::exit(1);
			}
		}
		if (a == 4)
		{
			if (practice_1_4() != 0)
			{
				ft_print_cout("error practice_1_menu -> practice_1_4");
				std::exit(1);
			}
		}
		if (a == 5)
		{
			if (practice_1_5() != 0)
			{
				ft_print_cout("error practice_1_menu -> practice_1_5");
				std::exit(1);
			}
		}
		if (a == 6)
		{
			if (practice_1_6() != 0)
			{
				ft_print_cout("error practice_1_menu -> practice_1_6");
				std::exit(1);
			}
		}
		else if (a == 7)
		{
			if (list_of_practicums() != 0)
			{
				ft_print_cout("error practice_1_menu -> list_of_practicums");
				std::exit(1);
			}
		}
		else if (a == 8)
		{
			if (main_page() != 0)
			{
				ft_print_cout("error practice_1_menu -> error main page");
				std::exit(1);
			}
		}
		else if (a == 27)
		{	
			ft_print_cout("Досвидания!");
			std::exit(0);
		}
		else if ((a < 1) || (a > 9))
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

int practice_1()
{
	ft_print_cout("ПРАКТИКУМ 1");
	ft_print_cout("Список номеров Практикума 1");
	if (practice_1_menu() != 0)
	{
		ft_print_cout("error practice_1_1_rlz");
		exit(1);
	}
	return (1);
}