#include "holberton.h"
/**
 * display_complex_number - function that displays the complex numbers.
 * @c: The complex number.
 */

void display_complex_number(complex c)
{
	if (c.im > 0)
		printf("%0.f + %0.fi\n", c.re, c.im);
	else if (c.im < 0)
	{
		c.im = -c.im;
		 printf("%0.f - %0.fi\n", c.re, c.im);
	}
	else
		  printf("%0.f\n", c.re);
}
