// Create a program that contains an array containing five integer elements.
// Read this array from the keyboard and print the address of the positions containing values Couple.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[5],*p=a;

    for(int i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0 ; i < 5 ; i++) if(*(p+i)%2 == 0) printf("%d\n",&*(p+i));
    system("pause");
    return 0;
}
