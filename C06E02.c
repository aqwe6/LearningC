//Create a program that reads six integer values from the keyboard and then shows in the screen the values read.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[6];
    for(int i=0; i<=5; i++)
    {
        scanf("%d",&x[i]);
    }
    for(int i=5; i>=0; i--)
    {
        printf("%d\n",x[i]);
    }
    system("pause");
    return 0;
}
