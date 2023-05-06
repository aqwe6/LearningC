// Make a recursive function that calculates the value of the following S-series for a value n greater than zero to be supplied as a parameter to it:
// S = 2 + 5/2 + 10/3 + ... + (1+n*n)/n

#include<stdio.h>
#include<stdlib.h>

double k(double x)
{
    double f = 0;
    for(double i = 1 ; i <= x ; i++) f = f + (1+i*i)/i;
    return f;
}

int main()
{
    double h;
    scanf("%lf",&h);
    printf("%lf\n",k(h));

    system("pause");
    return 0;
}
