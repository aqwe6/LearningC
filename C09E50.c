// Create a recursive function that returns the smallest element in a vector.

#include<stdio.h>
#include<stdlib.h>

int k()
{
    int a[10];
    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%d",&a[i]);
    }
    int b = a[0];
    for(int i = 0 ; i < 10 ; i++)
    {
        if(a[i] < b) b = a[i];
    }
    return printf("%d\n",b);;
}

int main()
{
    k();

    system("pause");
    return 0;
}
