#include "monty.h"
/**
*pall - a function to print all the elements of the stack
*@head: the headre of the stack
*@line_num:the line number we are currently in
*/
void pall(stack_t **head, unsigned int line_num)
{
	stack_t *temp;

	temp = *head;
	(void) line_num;
	if (temp != NULL)
	{
		while (temp)
		{
			printf("%d\n", temp->n);
			temp = temp->next;
		}
	}
}
