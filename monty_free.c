#include "monty.h"

/**
 * monty_free - This program frees the stack
 * @stack : This is the stack to be freed
 */
void monty_free(stack_t *stack)
{
	if (stack != NULL)
	{
		monty_free(stack->next);
		free(stack);
	}
}
