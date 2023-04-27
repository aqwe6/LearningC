//Make a program that calculates and shows the sum of the first 50 even numbers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    for(int i = 1; i <= 100 ; i++)
    {
        if(i%2==0) x=x+i;
    }
    printf("%d\n",x);
    system("pause");
    return 0;
}
