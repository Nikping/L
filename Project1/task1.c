#include <stdio.h>
#include <math.h>
void main()
{
	double x = 5;
	double f = ((1 - tan(x)) / (1 + tan(x)));
	printf("x = %.4lf\n", x);
	printf("f = ((1 - tan(x)) / ((1 + tan(x)) = %.4lf\n", f);
	printf("x = ");
	scanf_s("%lf", &x);
	f = ((1.0 - tan(x)) / (1.0 + tan(x)));
	printf("f = ((1.0 - tan(x)) / (1.0 + tan(x)) = %.4lf\n", f);
}