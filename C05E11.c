//Make an algorithm that reads a positive number and prints its divisors. Example: the divisors of the number 66 are: 1, 2, 3, 6, 11, 22, 33 and 66.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d",&x);
    for(int i = 1; i <= x ; i++)
    {
        if(x%i == 0)
        {
            printf("%d\n",i);
        }
    }
    system("pause");
    return 0;
}
