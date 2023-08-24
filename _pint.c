#include "monty.h"
/**
*pint - function to print the top element in the stack
*@head: the header of the stack
*@line_num: the line we currently in
*/
void pint(stack_t **head, unsigned int line_num)
{
	stack_t *temp;

	temp = *head;
	if(temp != NULL)
	{
		printf("%d\n", temp->n);
	}
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
		fclose(d.fp);
		free(d.values);
		_free(head);
		exit(EXIT_FAILURE);
	}
}
