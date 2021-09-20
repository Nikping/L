#include <stdio.h>
#include <math.h>
double sum(double x)
{
	double f;
	f = ((1 - tan(x)) / (1 + tan(x)));
	return (f);
}
void main()
{
	double f;
	double x = 2;
	f = sum(x);
	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n", f);
	printf("x = ");
	scanf_s("(%lf)", x);
	f = sum(x);
	printf("f = %.4lf", f);
}