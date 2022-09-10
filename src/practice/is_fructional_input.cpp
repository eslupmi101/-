#include "lib.hpp"

bool		is_fructional_input(const char* line)
{
	size_t	j;

	j = 0;
	for (size_t i = 0; i != (strlen(line)); i++)
	{
		if ((line[i] <= 46 || line[i] >= 58) && (line[i] != '.') && (line[0] != '-'))
			return (false);
		if (line[i] == '.')
			j++;
		if ((line[0] == '.') || (line[strlen(line) - 1] == '.') || (j > 1))
			return (false);
	}
	return (true);
}