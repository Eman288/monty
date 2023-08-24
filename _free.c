#include "monty.h"
/**
*_free - a function to free the stack
*@head: the header of the stack
*/
void _free(stack_t **head)
{
	stack_t *temp;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
	       free(*head);
	       *head = temp;
	}
}
