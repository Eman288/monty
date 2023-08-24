#include "monty.h"
/**
*pop - function to remove the top element from the stack
*@head: the header of the stack
*@line_num: the line we are currently in
*/
void pop(stack_t **head, unsigned int line_num)
{
	stack_t *temp;

	temp = *head;
	if (temp != NULL)
	{
		*head = temp->next;
		free(temp);
	}
	else
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		fclose(d.fp);
		free(d.values);
		_free(head);
		exit(EXIT_FAILURE);
	}
}
