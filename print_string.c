#include "monty.h"

/**
 * op_pstr - prints the string starting from the top
 *           followed by a new line
 * @stack: double pointer to the top of the stack.
 * @line_number: current line number of the opcode in the Monty file
 */
void op_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *nyc = *stack;
	(void) line_number;

	while (nyc && nyc->n > 0 && nyc->n <= 127)
	{
		printf("%c", nyc->n);
	nyc = nyc->next;
	}
	printf("\n");
}
