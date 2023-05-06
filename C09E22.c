// Write a function for calculating the volume and area of a sphere
// V = 4/3 π + r^3 ,
// A = 4 π * r2
// where π = 3.1414592. The value of the radius r must be passed per parameter, and the Calculated values must be returned by reference.

#include<stdio.h>
#include<stdlib.h>

void k(double *a)
{
    double b = (4*3.1414592)/3+((*a)*(*a)*(*a));
    double c = 4*3.1414592*(*a)*(*a);
    printf("%lf\n%lf\n",b,c);
}

int main()
{
    double x;
    scanf("%lf",&x);
    k(&x);

    system("pause");
    return 0;
}
