#include "monty.h"

/**
 * opcode_pall - This program prints all the values on the stack,
 * starting from the top of the stack
 * @stack: This is a pointer to pointer at the head of a stack
 * @count_line: This i s an integer that shows where the commandappear
 */
void opcode_pall(stack_t **stack, unsigned int count_line)
{
	stack_t *ptr;

	(void) count_line;

	ptr = *stack;

	while (ptr)
	{
		printf("%d", ptr->n);
		ptr = ptr->next;
		printf("\n");
	}
}
