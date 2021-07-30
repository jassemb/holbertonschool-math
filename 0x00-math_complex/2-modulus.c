#include "holberton.h"
/**
 * modulus - function return the modulus of a given complex number.
 * @c: The complex number.
 * return : modulus of a complex number
 */
double modulus(complex c)
{
	int a, b;
	double md;


	a = pow(c.im, 2);
	b = pow(c.re, 2);
	md = sqrt(a + b);

	return(md);

}
