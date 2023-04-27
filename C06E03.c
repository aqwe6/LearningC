//Make a program that reads five values and stores them in a vector. Then Show all the values read along with the average of the values.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[5],y=0;
    for(int i=0; i<=4; i++)
    {
        scanf("%d",&x[i]);
    }
    for(int i=0; i<=4; i++)
    {
        printf("%d\n",x[i]);
        y=y+x[i];
    }
    printf("%d\n",y/5);


    system("pause");
    return 0;
}
