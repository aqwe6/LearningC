// Write a function that takes two numbers by parameter and returns the largest theirs.

#include<stdio.h>
#include<stdlib.h>

int a(double x,double y)
{
    if(x>y) return x;
    else return y;
}

int main(void)
{
    double k,w;
    scanf("%lf %lf",&k,&w);
    double z=a(k,w);
    printf("%lf\n",z);

    system("pause");
    return 0;

}

