#include "monty.h"
#define _GNU_SOURCE
data d = {0, NULL, NULL};
/**
*main - the main function code
*@argc: number of arguments
*@argv: the arguments
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int line_num, m;

	FILE *fo;

	stack_t *stack = NULL;

	size_t n;

	char *buff;

	line_num = 0;
	m = 1;
	if (argc < 2 || argc > 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fo = fopen(argv[1], "r");
	if (!fo)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	d.fp = fo;
	while (m != -1)
	{
		line_num++;
		buff = NULL;
		m = getline(&buff, &n, fo);
		if (is_space(buff) == 0 && m != -1)
			exe(buff, line_num, &stack);
		free(buff);
	}
	fclose(fo);
	/*free(d.values);*/
	_free(&stack);
	return (0);
}
