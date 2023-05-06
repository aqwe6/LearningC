// In mathematics, the harmonic number designated by Hn is defined as the nth term of the harmonic series. That is:
// Hn = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
// Write a recursive function that calculates the value of any Hn

#include<stdio.h>
#include<stdlib.h>

double k(double x)
{
    double f = 0;
    for(double i = 1 ; i <= x ; i++) f = f + (1/i);
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
