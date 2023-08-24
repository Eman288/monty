#include "monty.h"
/**
*swap - a function to swap the top two elements
*@head: the header of the stack
*@line_num: the line we currently in
*/
void swap(stack_t **head, unsigned int line_num)
{
	int t;

	stack_t *temp;
	temp = *head;
	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
		fclose(d.fp);
		free(d.values);
		_free(head);
		exit(EXIT_FAILURE);
	}
	else
	{
		t = temp->n;
		temp->n = temp->next->n;
		temp->next->n = t;
	}
}
