//In mathematics, the harmonic number designated by Hn is defined as the nth term of the harmonic series. That is
//Hn=1+1/2+1/3+1/4+...+1/n
//Present a program that calculates the value of any Hn.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double y=1;
    int x;
    scanf("%d",&x);
    for(double i=2;i<=x;i++)
    {
        y = y+(1/i);

    }
    printf("%lf\n",y);

    system("pause");
    return 0;
}
