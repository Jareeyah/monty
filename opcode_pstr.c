#include "monty.h"

/**
 * opcode_pstr - A program that implements the pstr opcode,
 * It prints the string starting at the top of the stack,
 * followed by a new line
 * @stack: This is a pointer to pointer at the head of a stack
 * @count_line: This i s an integer that shows where the commandappear
 */
void opcode_pstr(stack_t **stack, unsigned int count_line)
{
	stack_t *first_item = *stack;

	(void)count_line;

	if ((stack == NULL) || (*stack == NULL))
	{
		printf("\n");
	}
	else
	{
		while (first_item != NULL)
		{
			if ((first_item->n > 0) && (isascii(first_item->n)))
			{
				printf("%c", first_item->n);
				first_item = first_item->next;
			}
			else
			{
				break;
			}
		}
		printf("\n");
	}
}
