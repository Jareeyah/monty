#include "monty.h"

/**
 * opcode_rotl - A program that implements the rotl opcode,
 * It rotates the stack to the top
 * @stack: This is a pointer to pointer at the head of a stack
 * @count_line: This i s an integer that shows where the command appear
 */
void opcode_rotl(stack_t **stack, unsigned int count_line)
{
	stack_t *new, *back;

	(void)count_line;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		;
	}
	else
	{
		new = back = *stack;
		while (back->next)
		{
			back = back->next;
		}
		*stack = back->next;
		back->next = new;
		new->prev = back;
		new->next = NULL;
		(*stack)->prev = NULL;
	}
}
