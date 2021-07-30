#include "holberton.h"

/**
 * argument - function return the argument of a given complex number.
 * @c: The complex number.
 * return : argument of a complex number
 */
double argument(complex c)
{
	double arg;
	double value;

	value =(c.im / c.re);	
	arg = atan(value);
	return(arg);
}
