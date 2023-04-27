//Write a program that reads a 10-position vector from the keyboard. Write on the screen how many even values were stored in this vector.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10],x,y,z=0;

    for(int i = 0; i<=9; i++)
    {
        scanf("%d",&A[i]);
        if(A[i]%2==0) z++;
    }
    printf("%d\n",z);
    system("pause");
    return 0;
}
