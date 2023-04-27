//Design a program that reads multiple integers until a negative number is entered. The program has to return the largest and the smallest number Read.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y=0,z=0,w;
    while(x>=0){
       scanf("%d",&x);
       if(x > y) y = x;
       if(x < z && x >= 0) z = x;
    }
    printf("largest %d\n",y);
    printf("smallest %d\n",z);

    system("pause");
    return 0;
}
