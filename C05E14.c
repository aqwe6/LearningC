//Write a program that reads an integer, greater than or equal to zero, from the user. Print the nth term of the Fibonacci sequence. This sequence begins in the zero-order term, and from the second term, its value is given by the sum of the previous two terms. Some terms in this sequence are: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y=0,z=1,w;
    scanf("%d",&x);
    for(int i = 2; i <= 2^x ; i++)
    {
        w=y+z;
        if(x==i){
            printf("%d\n",w);
            break;
        }
        y=z;
        z=w;

    }

    system("pause");
    return 0;
}
