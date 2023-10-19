#include "monty.h"

/**
 * op_pall - prints all values
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *nyc = *stack;

	while (nyc != NULL)
	{
		printf("%d\n", nyc->n);
		nyc = nyc->next;
		(void)line_number;
	}

}
