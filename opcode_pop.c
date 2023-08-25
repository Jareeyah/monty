#include "monty.h"

/**
 * opcode_pop - A program that implements opcode pop,
 * @stack: This is a pointer to pointer at the head of a stack
 * @count_line: This is an integer that shows where the comman d appear
 */
void opcode_pop(stack_t **stack, unsigned int count_line)
{
	stack_t *new;

	if ((*stack == NULL) || (stack == NULL))
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count_line);
		fclose(file);
		monty_free(*stack);
		exit(EXIT_FAILURE);
	}
	new = *stack;
	*stack = (*stack)->next;
	if (new->next)
	{
		new->next->prev = NULL;
	}
	free(new);
}
