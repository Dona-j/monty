#include "monty.h"

/**
 * mul - s
 * @stack: Double linked list
 * @line_number: File line execution
 */
void mul(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n",
			line_number);
		free_all();
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->next->n * (*stack)->n;
	pop(stack, line_number);
}


/**
 * mod - s
 * @stack: Double linked list
 * @line_number: File line execution
 */
void mod(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n",
			line_number);
		free_all();
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		free_all();
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->next->n % (*stack)->n;
	pop(stack, line_number);
}


/**
 * pchar - s
 * @stack: Double linked list
 * @line_number: File line execution
 */
void pchar(stack_t **stack, unsigned int line_number)
{
    if (!stack || !*stack)
    {
        printf("L%u: can't pchar, stack empty\n", line_number);
        return;
    }

    if ((*stack)->n < 0 || (*stack)->n > 127)
    {
        printf("L%u: can't pchar, value out of range\n", line_number);
        return;
    }

    printf("%c\n", (*stack)->n);
}


/* pstr - s
 * @stack: Double linked list
 * @line_number: File line execution
 */
void pstr(stack_t **stack, unsigned int line_number)
{
    stack_t *tmp = *stack;

    if (!stack || !*stack)
    {
        putchar('\n');
        return;
    }

    while (tmp)
    {
        if (tmp->n == 0 || !isascii((tmp)->n))
        {
            break;
        }

        putchar(tmp->n);
        tmp = tmp->next;
    }

    putchar('\n');
}

