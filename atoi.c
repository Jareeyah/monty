#include "monty.h"

/**
 * _atoi - This program converts a string to an integer
 * @str: The string thatwill be converted to an integer
 * @num: The integer that the string will be converted to
 * Return: The converted integer
 */
int _atoi(char *str, int *num)
{
	int num_sign = 1;
	int result = 0;
	int a, index;

	for (index = 0; !(str[index] >= 48 && str[index] <= 57); index++)
	{
		if (str[index] == '-')
		{
			num_sign = num_sign * -1;
		}
	}
	for (a = index; str[a] ; a++)
	{
		if (str[a] >= 48 && str[a] <= 57)
		{
			result = result * 10;
			result = result + (str[a] - 48);
		}
		else
		{
			return (-1);
		}
	}

	*num = result * num_sign;
	return (0);
}
