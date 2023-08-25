#include "monty.h"
/**
*is_space - checks if the string contains only spaces
*@str: the string
*Return: Always 0 (Success)
*/
int is_space(char *str)
{
	int i, flag;

	flag = 1;
	if (str == NULL)
		return (1);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			flag = 0;
			break;
		}
	}
	return (flag);
}
