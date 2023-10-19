#include "monty.h"

/**
 * op_div - Entry point
 * @stack: double pointer to the head of the stack
 * @line_number: current line number in the file
 */
void op_div(stack_t **stack, unsigned int line_number)
{
	int nyc;
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	nyc = temp->next->n / temp->n;
	temp->next->n = nyc;
	*stack = temp->next;
	free(temp);
}
