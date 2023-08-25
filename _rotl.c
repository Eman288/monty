#include "monty.h"
/**
*rotl - rotates the stack to the top
*@head:the header of the stack
*@line_num: the line we are in
*/
void rotl(stack_t **head, unsigned int line_num)
{
	stack_t *temp;

	int t;

	temp = *head;
	(void)line_num;
	if (temp != NULL && temp->next != NULL)
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		t = (*head)->n;
		(*head)->n = temp->n;
		(*head)->n = t;
		(*head)->next->n = t;
	}
}
