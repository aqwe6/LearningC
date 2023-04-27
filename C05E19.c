// Make a program that calculates and writes the value of S:
// S = 1/1+3/2+5/3+7/4+...+99/50

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double y=0;

    for(double i=1 ; i<=50 ; i++)
    {
        y=y+(2*i-1)/i;
    }
    printf("%lf",y);

    system("pause");
    return 0;
}
