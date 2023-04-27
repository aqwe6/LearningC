//Write a program that reads 10 numbers and writes the smallest value read and the largest value read.

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
        if(i == 1)
        {
        y = x;
        z = x;
      }
      if(y < x) y=x;
      if(z > x) z=x;
    }
    printf("largest %d\n",y);
    printf("smallest %d\n",z);
    system("pause");
    return 0;
}
