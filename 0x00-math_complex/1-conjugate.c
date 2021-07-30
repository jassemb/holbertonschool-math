#include "holberton.h"
/**
 * conjugate - function that return return.
 * @c: The complex number.
 * return : conjugate number
 */

complex conjugate(complex c)
{

	if (c.im > 0)
	{
		c.im = -c.im;
	}
	else if (c.im < 0)
	{
		c.im = -c.im;
	}
	 return (c);
}
