// Write a function that, given a real number passed as a parameter, returns the integer part and the fractional part of that number by reference.

#include<stdio.h>
#include<stdlib.h>

void k(double *a)
{
    int b = *a;
    double c = *a - b;
    printf("%d\n%lf\n",b,c);
}

int main()
{
    double x;
    scanf("%lf",&x);
    k(&x);

    system("pause");
    return 0;
}
