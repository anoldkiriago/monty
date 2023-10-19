#include "monty.h"

/**
 * free_stack - frees a stack_t list and on repeat
 * @stack: pointer to the top of the stack
 */
void free_stack(stack_t *stack)
{
	stack_t *nyc;

	while (stack != NULL)
	{
		nyc = stack;
		stack = stack->next;
		free(nyc);
	}
}
