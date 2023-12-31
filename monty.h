#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
* struct data_c - the data of the stack or queue
* @mode: 0 foe stack, 1 for queue
* @fp: the file
* @values: the values
*
* Description: to carry data of the stack or the queue
* for stack, queues
*/
typedef struct data_c
{
	int mode;
	FILE *fp;
	char *values;
} data;
extern data d;
void _push(int value, stack_t **head);
int exe(char *line, int line_num, stack_t **head);
void is_push(stack_t **head, unsigned int line_num);
int is_digit(char *str);
void pall(stack_t **head, unsigned int line_num);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
void pint(stack_t **head, unsigned int line_num);
void _free(stack_t **head);
void pop(stack_t **head, unsigned int line_num);
void nop(stack_t **head, unsigned int line_num);
int is_space(char *str);
void swap(stack_t **head, unsigned int line_num);
void add(stack_t **head, unsigned int line_num);
void sub(stack_t **head, unsigned int line_num);
void _div(stack_t **head, unsigned int line_num);
void mul(stack_t **head, unsigned int line_num);
void mod(stack_t **head, unsigned int line_num);
void pchar(stack_t **head, unsigned int line_num);
void pstr(stack_t **head, unsigned int line_num);
void rotl(stack_t **head, unsigned int line_num);
void rotr(stack_t **head, unsigned int line_num);
#endif
