// Create a program that contains an array of integers containing five elements.
// Using pointer arithmetic only, read this array from the keyboard and print the double each value read.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[5],*p=a;

    for(int i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0 ; i < 5 ; i++) printf("%d\n",*(p+i)*2);
    system("pause");
    return 0;
}
