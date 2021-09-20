#include <stdio.h>
#include <math.h>
void function(double x);
double x, result;
void main()
{
	double x = 5;
	function(x);
	printf("x = %.4lf\n", x);
	printf("f = %.4lf\n\n", result);
	printf("x = ");
	scanf_s("%lf", &x);
	function(x);
	printf("f = %.4lf", result);
} 
void function(double x)
{ 
	result = (1 - tan(x)) / (1 + tan(x)); 
}