#include "monty.h"

/**
 * opcode_rotr - A program that implements the rotr opcode,
 * It rotates the stack to the bottom
 * @stack: This is a pointer to pointer at the head of a stack
 * @count_line: This is an integer that shows where the command appear
 */
void opcode_rotr(stack_t **stack, unsigned int count_line)
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
		back->prev->next = NULL;
		back->prev = NULL;
		back->next = new;
		new->prev = back;
		*stack = back;
	}
}
