//Make a program that reads 10 positive integers, ignoring non-positive ones, and prints your average.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int y=0,z=0;
    printf("enter 10 values\n");
    for(int i = 1; i <= 10 ; i++)
    {
        scanf("%d",&x);
        if(x >= 0)
        {
            y=y+x;
            z=z+1;
        }
    }
    printf("%d\n",y/z);
    system("pause");
    return 0;
}
