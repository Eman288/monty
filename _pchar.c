#include "monty.h"
/**
*pchar - print the char value of the top element
*@head: the header of the stack
*@line_num: the line we are curently in
*/
void pchar(stack_t **head, unsigned int line_num)
{
	stack_t *temp;

	temp = *head;
	if (temp == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_num);
		fclose(d.fp);
		free(d.values);
		_free(head);
		exit(EXIT_FAILURE);
	}
	else if (temp->n < 0 || temp->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_num);
		fclose(d.fp);
		free(d.values);
		 _free(head);
		 exit(EXIT_FAILURE);
	}
	else
	{
		printf("%c\n", temp->n);
	}
}
