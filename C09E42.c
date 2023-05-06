// Create a recursive function that returns the average of the elements of a vector of Whole.

#include<stdio.h>
#include<stdlib.h>

double k()
{
    double a[10],b=0;
    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%lf",&a[i]);
        b = b + a[i];
    }
    return printf("%lf\n",b/10);;
}

int main()
{
    k();

    system("pause");
    return 0;
}
