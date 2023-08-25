#include "monty.h"

/**
 * opcode_add - This program implments the add opcode,
 * It adds the top two elements of the stack.
 * @stack: This is a pointer to pointer at the head of a stack
 * @count_line: This i s an integer that shows where the commandappear
 */
void opcode_add(stack_t **stack, unsigned int count_line)
{
	stack_t *new, *new_item;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count_line);
		fclose(file);
		free(*stack);
		exit(EXIT_FAILURE);
	}
	else
	{
		new = *stack;
		new_item = new->next;
		new_item->n = new_item->n + new->n;
		*stack = new_item;
		(*stack)->prev = NULL;
		free(new);
	}
}
