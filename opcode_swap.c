#include "monty.h"

/**
 * opcode_swap - This program implements the swap opcode,
 * It swaps the top two elements of the stack.
 * @stack: This is a pointer to pointer at the head of a stack
 * @count_line: This is an integer that shows where the command appear
 */
void opcode_swap(stack_t **stack, unsigned int count_line)
{
	stack_t *new, *new_item;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count_line);
		fclose(file);
		monty_free(*stack);
		exit(EXIT_FAILURE);
	}
	else if (*stack != NULL)
	{
		new = *stack;
		new_item = new->next;
		*stack = new_item;
		new->next = new_item->next;
		if (new->next != NULL)
		{
			new_item->next->prev = new;
		}
		new_item->prev = NULL;
		new_item->next = new;
		new->prev = new_item;
	}
}
