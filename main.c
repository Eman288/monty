#include "monty.h"
/**
*main - the main function code
*@argc: number of arguments
*@argv: the arguments
*Return: Always 0 (Success)
*/
data d = {0, NULL, NULL};
int main(int argc, char *argv[])
{
	int line_num, i;

	FILE *fo;

	stack_t *stack = NULL;

	size_t n;

	char *buff = NULL;

	line_num = 0;
	if (argc < 2)
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
	while (getline(&buff, &n, fo) != -1)
	{
		line_num++;
		i = exe(buff, line_num, &stack);
		if (i == -1)
			exit(0);
	}
	free(buff);
	fclose(fo);
	free(stack);
	return (0);
}
