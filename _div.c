#include "monty.h"
/**
*_div - a function to divide the top two elements in the stack
*@head: the header of the stack
*@line_num: the line we are currenlty in
*/
void _div(stack_t **head, unsigned int line_num)
{
	stack_t *temp;

	int m;

	temp = *head;
	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_num);
		fclose(d.fp);
		free(d.values);
		_free(head);
		exit(EXIT_FAILURE);
	}
	else if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_num);
		fclose(d.fp);
		free(d.values);
		_free(head);
		exit(EXIT_FAILURE);
	}
	else
	{
		m = temp->next->n / temp->n;
		temp->next->n = m;
		*head = temp->next;
		free(temp);
	}
}
