// Make a function that takes an integer N as a parameter. Calculate and return the result of the following series S:
// S = 2/4 + 5/5 + 10/6 + ... + (N*N+1)/(N+3)

#include<stdio.h>
#include<stdlib.h>

double k (double n)
{
    if(n == 1) return 0.5;
    else return k(n-1) + ((n*n+1)/(n+3));
}

int main()
{
    double a;
    scanf("%lf",&a);
    printf("%lf\n",k(a));

    system("pause");
    return 0;
}
