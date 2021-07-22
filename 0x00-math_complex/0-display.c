#include <stdio.h>

/**
 * struct complex - complex information
 * @re: real part of complex number
 * @im: imaginare part of complex number
 *
 * Description: complex struct
 */

typedef struct complex {
    int re;
    int im;
} complex;
/**
 * display_complex_number - print complex number
 *
 * @c: pointer to struct of type struct complex
 *
 * Return: always void
 */

void display_complex_number(complex c)
{
    printf("\n%d + %di", c.re, c.im);
} 

