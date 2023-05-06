// Create a recursive function that returns the sum of the elements of a vector of integers.

#include<stdio.h>
#include<stdlib.h>

int k()
{
    int a[10],b=0;
    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%d",&a[i]);
        b = b + a[i];
    }
    return printf("%d\n",b);;
}

int main()
{
    k();

    system("pause");
    return 0;
}
