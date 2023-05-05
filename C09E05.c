// Write a function for calculating the volume of a sphere V = 4/3π * r3 where π = 3.1414592 value of radius r must be passed per parameter.

#include<stdio.h>
#include<stdlib.h>

double k ()
{
    double x;
    scanf("%lf",&x);
    return printf("%lf\n",3.1414592*x*x*x*4/3);
}

int main()
{
    k();

    system("pause");
    return 0;
}
