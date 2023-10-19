#include "monty.h"

/**
 * op_mul - multiplies second top element
 * @stack: double pointer to the head of the stack
 * @line_number: current line number in the file
 */
void op_mul(stack_t **stack, unsigned int line_number)
{
	int nyc;
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	nyc = temp->next->n * temp->n;
	temp->next->n = nyc;
	*stack = temp->next;
	free(temp);
}
