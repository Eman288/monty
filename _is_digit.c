#include "monty.h"
/**
*is_digit - a function to check if the string contains a number
*@str: the string
*Return: 1 on (Success) 0  on failur
*/
int is_digit(char *str)
{
	int i, flag;

	flag = 1;

	for (i = 0; str[i]; i++)
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			flag = 0;
	}
	return (flag);
}
