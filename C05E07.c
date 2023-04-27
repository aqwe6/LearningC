//Design a program that asks the user to enter 10 values. Add these values and present the result on the screen.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y=0;
    printf("enter 10 values\n");
    for(int i = 1; i <= 10 ; i++)
    {
      scanf("%d",&x);
      y=y+x;
    }
    printf("%d",y);
    system("pause");
    return 0;
}
