#include <stdio.h>
#include <math.h> 
extern double x, result;
void function()
{
	result = ((1 - tan(x)) / (1 + tan(x)));
}