#include "monty.h"

/**
 * op_pchar - prints the character at the top
 * @stack: pointer to the top of the stack
 * @line_number: current line number of the opcode in the Monty file
 */
void op_pchar(stack_t **stack, unsigned int line_number)
{
	int nyc;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	nyc = (*stack)->n;
	if (nyc < 0 || nyc > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", nyc);
}
