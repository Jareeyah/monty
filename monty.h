#ifndef MONTY_H
#define MONTY_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
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

extern FILE *file;
FILE *file;

void (*func_op)(stack_t **, unsigned int count_line);
void opcode_push(stack_t **stack, unsigned int count_line, char *buffer);
int _isdigit(char *string);
void opcode_nop(stack_t **stack, unsigned int count_line);
void monty_free(stack_t *stack);
void opcode_pop(stack_t **stack, unsigned int count_line);
int _atoi(char *sum, int *num)
#endif /* MONTY_H */
