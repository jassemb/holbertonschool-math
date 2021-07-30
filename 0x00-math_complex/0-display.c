#include "holberton.h"
/**
 * display_complex_number - function that displays the complex numbers.
 * @c: The complex number.
 */

void display_complex_number(complex c)
{
	if (c.im > 0)
		printf("%d + %di\n", c.re, c.im);
	else if (c.im < 0)
	{
		c.im = -c.im;
		 printf("%d - %di\n", c.re, c.im);
	}
	else
		  printf("%d\n", c.re);
}
