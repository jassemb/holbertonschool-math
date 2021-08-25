#ifndef HERON_H
#define HERON_H

#include  <stdlib.h>

/**
 * struct s_cell - un struct para almacenar una secuencia de Heron
 * @elt: la aproximación de una raíz cuadrada de un número
 * @next: a pointer to the next node
 */
typedef struct s_cell
{
	double elt;
	struct s_cell *next;
} t_cell;

t_cell *heron(double p, double x0);

#endif
