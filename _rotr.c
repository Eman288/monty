#include "monty.h"
/**
*rotr - The last element of the stack becomes the top element of the stack
*@head: the header of the stack
*@line_num: the line we are curently in
*/
void rotr(stack_t **head, unsigned int line_num)
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
		t = temp->n;
		temp->n = (*head)->n;
		(*head)->n = t;
	}
}
