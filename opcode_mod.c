#include "monty.h"

/**
 * opcode_mod - A program that implements the div opcode,
 * It computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @stack: This is a pointer to pointer at the head of a stack
 * @count_line: This i s an integer that shows where the commandappear
 */
void opcode_mod(stack_t **stack, unsigned int count_line)
{
	stack_t *new, *new_item;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", count_line);
		fclose(file);
		free(*stack);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count_line);
		fclose(file);
		monty_free(*stack);
		exit(EXIT_FAILURE);
	}
	else
	{
		new = *stack;
		new_item = new->next;
		new_item->n = new_item->n % new->n;
		*stack = new_item;
		(*stack)->prev = NULL;
		free(new);
	}
}
