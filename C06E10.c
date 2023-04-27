//Make a program that fills a vector of size 100 with the first 100 natural numbers that are not multiples of 7. At the end, print this vector on the screen.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[100],y=0;
    for(int i = 1; i<=116; i++)
    {
        if(i%7!=0)
        {
            A[y]=i;
            printf("%d\n",A[y]);
        }
        y++;
    }


    system("pause");
    return 0;
}
