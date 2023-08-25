#include "monty.h"

/**
 * opcode_pint - This program implements the pint opcode,
 * It prints the value at the top of the stack
 * @stack: This is a pointer to pointer at the head of a stack
 * @count_line: This i s an integer that shows where the command appear
 */
void opcode_pint(stack_t **stack, unsigned int count_line)
{
	if (!(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", count_line);
		fclose(file);
		monty_free(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
