//Make a program that receives from the user two arrays, A and B, with 10 integers each. Create a new C array by calculating C = A − B. Show the data on the screen of the C array.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10],B[10],C[10];


    for(int i = 0; i<=9; i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i = 0; i<=9; i++)
    {
        scanf("%d",&B[i]);
    }
    for(int i = 0; i<=9; i++)
    {
        C[i]=A[i]-B[i];
        printf("%d",C[i]);
    }

    system("pause");
    return 0;
}
