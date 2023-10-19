#include "monty.h"
/**
  *f_rotl- rotates stacks from the top
  *@head: head stack
  *@counter: number_line
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *nyc = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (nyc->next != NULL)
	{
		nyc = nyc->next;
	}
	nyc->next = *head;
	(*head)->next = NULL;
	(*head)->prev = nyc;
	(*head) = aux;
}
