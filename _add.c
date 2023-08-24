#include "monty.h"
/**
*add - add the top two elements in the stack
*@head: adds two elements
*@line_num: the line we are currently in
*/
void add(stack_t **head, unsigned int line_num)
{
	stack_t *temp;

	int m;

	temp = *head;
	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short", line_num);
		fclose(d.fp);
		free(d.values);
		_free(head);
		exit(EXIT_FAILURE);
	}
	else
	{
		m = temp->n;
		pop(head, line_num);
		temp = *head;
		temp->n += m;
	}
}
