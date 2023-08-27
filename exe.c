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
		{"push", is_push}, {"pall", pall}, {"pint", pint},
	      {"pop", pop}, {"swap", swap}, {"add", add},
	      {"nop", nop}, {"sub", sub}, {"div", _div},
	      {"mul", mul},
	      {"mod", mod},
	      {"pchar", pchar},
	      {"pstr", pstr},
	      {"rotr", rotr},
	      {"rotl", rotl},
		{NULL, NULL}
	};
	token = strtok(line, " \n\t");
	d.values = strtok(NULL, " \n\t");
	if (token != NULL && token[0] == '#')
			return (0);
	for (i = 0; str_func[i].opcode && token; i++)
	{
		if (strcmp(str_func[i].opcode, token) == 0)
		{
			str_func[i].f(head, line_num);
			return (0);
		}
	}
	if (str_func[i].opcode == NULL && token != NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_num, token);
		fclose(d.fp);
		free(line);
		_free(head);
		exit(EXIT_FAILURE);
	}
	free(token);
	return (-1);
}
