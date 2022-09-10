#include "lib.hpp"

int 		first_number()
{
	int			a;
	std::string	b;
	int			i;

	i = pow(10, 5);
	while (true)
	{
		a = ft_input();
		if (a < 1000000 && a > 99999)
		{
			std::cout << (a / i)  << std::endl;
			return (0);
		}
		else
			std::cout << "Ошибка! Введите требуемое число" << std::endl;
	}
	return (1);
}

int 		practice_1_4_rlz()
{
	ft_print_cout("Введите шестизначное число");
	if (first_number() != 0)
	{
		ft_print_cout("error practice_1_4_rlz");
		exit (1);
	}
	return(0);

}
