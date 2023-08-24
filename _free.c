#include "monty.h"
/**
*_free - a function to free the stack
*@head: the header of the stack
*/
void _free(stack_t **head)
{
	stack_t *temp;

	temp = *head;
	if (temp == NULL)
		return;
	while (temp->next != NULL)
	{
		temp = temp->next;
	       free(temp->prev);
	}
	if (temp != NULL)
		free(temp);
	free(head);
}
