#include <stdio.h>
#include "heron.h"
/**
 * create_node - creates new node for the Heron sequence
 * @n: a member of the Heron sequence
 *
 * Return: a new node for the Heron sequence
 */
t_cell *create_node(double n)
{
	t_cell *h = malloc(sizeof(t_cell));

	if (h == NULL)
	{
		free(h);
		return (NULL);
	}
	h->elt = n;
	h->next = NULL;
	return (h);
}

/**
 * reverse - an auxiliar function to revert the linked list
 * @head: a list of elements with a pointer to the first element
 * @prev: a pointer to a node of the linked list
 * @node: a pointer to another node of the linked list
 *
 * Return: Nothing
 */
void reverse(t_cell **head, t_cell *prev, t_cell *node)
{
	if (node->next != NULL)
	{
		prev = node;
		node = node->next;
		*head = (*head)->next;
		reverse(head, prev, node);
		node->next = prev;
	}
}

/**
 * reverse_cell - reverses a linked list
 * @head: a list of elements with a pointer to the first element
 *
 * Return: a pointer to the first node of the reversed list
 */
t_cell *reverse_cell(t_cell **head)
{
	t_cell *prev, *node;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	node = *head;
	prev = node;
	reverse(head, prev, node);
	node->next = NULL;
	return (*head);
}
/**
 * heron - makes the Heron sequence for calculate the square root of a
 * determined number
 * @p: a number to calculate its square root
 * @x0: a member of the Heron sequence
 *
 * Return: the Heron sequence until having convergence with an error less
 * or equal to 10^(-7)
 */
t_cell *heron(double p, double u0)
{
	t_cell *h= create_node(u0);
	t_cell *ptr = h;
	double error;

	while (1)
	{
		u0 = (u0 + (p / u0)) / 2;
		error = p - (u0 * u0);
		if (error < 0)
			error *= -1;
		if (error <= 0.00000001)
			break;
		ptr->next = create_node(u0);
		ptr = ptr->next;
	}
	reverse_cell(&h);
	return (h);
}
