#include "monty.h"

/**
 * opcode_sub - Thus program implements the sub opcode,
 * It subtracts the top element of the stack
 * from the second top element of the stack
 * @stack: This is a double pointer to the head of the stack
 * @count_line:The integer where nop appears
 */
void opcode_sub(stack_t **stack, unsigned int count_line)
{
	stack_t *one, *two;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count_line);
		fclose(file);
		monty_free(*stack);
		exit(EXIT_FAILURE);
	}
	else
	{
		one = *stack;
		two = one->next;
		two->n = two->n - one->n;
		*stack = two;
		(*stack)->prev = NULL;
		free(one);
	}
}
