#include "monty.h"

/**
 * opcode_mul - A program that implements the mul opcode,
 * It multiplies the second top element of the stack by the
 * top element
 * @stack: This is a pointer to pointer at the head of a stack
 * @count_line: This is an integer that shows where the commandappear
 */
void opcode_mul(stack_t **stack, unsigned int count_line)
{
	stack_t *new, *new_item;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", count_line);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	else
	{
		new = *stack;
		new_item = new->next;
		new_item->n = new_item->n * new->n;
		*stack = new_item;
		(*stack)->prev = NULL;
		free(new);
	}
}
