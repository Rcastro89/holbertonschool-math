#include"main.h"
/**
 * 
 * 
 */
void display_complex_number(complex c)
{
	if (c.im == 0 && c.re == 0)
	printf("\n");
	else if (c.im == 0)
	printf("%.f\n", c.re);
	else if (c.re == 0)
	printf("i%.f\n", c.im);
	else
	printf("%.f + i%.f\n", c.re, c.im);
}