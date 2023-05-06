// Write a function that takes an array of 10 elements and returns its sum.

#include<stdio.h>
#include<stdlib.h>

void k()
{
    double b = 0;
    double a[10];
    for(int i = 0 ; i<10 ; i++) scanf("%lf",&a[i]);
    for(int i = 0 ; i<10 ; i++) b = b + a[i];
    printf("%lf\n",b);
}

int main()
{
    k();

    system("pause");
    return 0;
}
