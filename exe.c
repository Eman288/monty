#include "monty.h"
/**
*exe - a function to check which function to execute
*@line: the line of the command
*@line_num: the line we are currently in
*@head: the header of the stack
*Return: Always 0 (Success)
*/
int exe(char *line, int line_num, stack_t **head)
{
	int i;

	char *token;

	instruction_t str_func[] = {
		{"push", is_push},
	      {"pall", pall},
		{NULL, NULL}
	};
	token = strtok(line, " \n\t");
	d.values = strtok(NULL, " \n\t");
	for (i = 0; str_func[i].opcode; i++)
	{
		if (strcmp(str_func[i].opcode, token) == 0)
		{
			str_func[i].f(head, line_num);
			return (0);
		}
	}
	fclose(d.fp);
	free(d.values);
	free(head);
	fprintf(stderr, "L%d: unknown instruction %s\n", line_num, token);
	exit(EXIT_FAILURE);
}
