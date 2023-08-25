#include "monty.h"
/**
*pstr - prints the string starting at the top of the stack
*@head: the header of the stack
*@line_num: the line we are curently in;
*/
void pstr(stack_t **head, unsigned int line_num)
{
	stack_t *temp;

	temp = *head;
	(void)line_num;
	while (temp)
	{
		if (temp->n <= 0 || temp->n > 127)
			break;
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
