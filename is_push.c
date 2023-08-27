#include "monty.h"

/**
*is_push - a function to check if the element is an integer or not and push it
*@head: the header of the stack
*@line_num: the line we are currenlty in
*/

void is_push(stack_t **head, unsigned int line_num)
{
	int i, value, j;

	j = 0;
	if (d.values)
	{
		i = 0;
		if (d.values[0] == '-')
			i = 1;
		for (; d.values[i] != '\0'; i++)
		{
			if (d.values[i] < 48 || d.values[i] > 57)
			{
				j = -1;
			}
		}
		if (j == -1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_num);
			fclose(d.fp);
			/*free(d.values);*/
			_free(head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: unknown instruction push integer\n", line_num);
		fclose(d.fp);
		free(d.values);
		_free(head);
		exit(EXIT_FAILURE);
	}
	value = atoi(d.values);
	if (d.mode == 0)
	{
		_push(value, head);
	}
	else
	{
		printf("q");
	}
}
