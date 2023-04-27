// Write a program that reads a certain amount of numbers, prints the largest of them and how many times the largest number were read. The number of numbers to be read must be provided by the user.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y=0,z=0,w;
    printf("number of number: ");
    scanf("%d",&w);
    for(int i=1; i<=w; i++)
    {
        scanf("%d",&x);
        if(x==y) z++;
        if(x>y)
        {
            y = x;
            z=1;
        }
    }
    printf("largest number %d\n",y);
    printf("times %d\n",z);

    system("pause");
    return 0;
}
