#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * @stack: the head of the linked list in stack
 * @line_number: the line number
 */
void add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(interpreter->file);
		free(interpreter->line);
		free_stack(stack);
		free(interpreter);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;
	pop(stack, line_number);
}
