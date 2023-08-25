#include "monty.h"

/**
 * op - This program contains all the operations
 * @f_op: This is the operation function
 * @i : This is the line
 * @s: This is the line of the program
 * Return: void
 */
void (*op(char *f_op, unsigned int i, stack_t **s))(stack_t**, unsigned int)
{
	int total;

	instruction_t command[] = {
		{"pop", opcode_pop},
		{"push", opcode_push},
		{"pall", opcode_pall},
		{"pint", opcode_pint},
		{"add", opcode_add},
		{"swap", opcode_swap},
		{"nop", opcode_nop},
		{NULL, NULL}
	};

	for (total = 0; command[total].opcode != NULL; total++)
	{
		if (strcmp(command[total].opcode, f_op) == 0)
		{
			return (command[total].f);
		}
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", i, f_op);
	fclose(file);
	monty_free(*s);
	exit(EXIT_FAILURE);
}
