// Write a function that takes by parameters two integer values x and y and calculate and return the result of x y for the main program. Do not use any functions ready for it

#include<stdio.h>
#include<stdlib.h>

double k ()
{
    int x,y;
    double d = 1;
    scanf("%d %d",&x,&y);
    if(y > 0) for(int i = 1; i <= y ; i++) d = d*x;
    if(y < 0) for(int i = 1; i <= -y ; i++) d = d/x;
    return printf("%lf\n",d);
}

int main()
{
    k();

    system("pause");
    return 0;
}
