//Make a program that displays the sum of all natural numbers below 1,000 that are multiples of 3 or 5.
#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int y=0;

    for(int i = 1; i <= 1000 ; i++)
    {
        if(i%15 == 0) y=y+i;
        else if(i%5 == 0) y=y+i;
        else if(i%3 == 0) y=y+i;
    }
    printf("%d\n",y);
    system("pause");
    return 0;
}
