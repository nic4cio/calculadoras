#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


double dividir(double F)
{

     double m = (F - 32) / 1.8;

     return m;
}


int main()
{
	double F;

	scanf("%lf", &F);
    
    printf("%.2lf\n", dividir(F));

	return 0;
}
