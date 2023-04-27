//Write a program that reads an integer and calculates the sum of all divisors of that number, with the exception of himself. Example: the sum of the divisors of the number 66 is 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y=0;
    scanf("%d",&x);
    for(int i = 1; i <= x-1 ; i++)
    {
        if(x%i == 0)
        {
            y=y+i;
        }
    }
    printf("%d\n",y);
    system("pause");
    return 0;
}
