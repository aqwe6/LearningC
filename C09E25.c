// Write a function that calculates the standard deviation d of a vector V containing n numbers
// d = sqrt(1/(n)*( (V[0]-m)^2 + (V[1]-m)^2 + ... + (V[n-1]-m)^2 ))
// where m is the mean of that vector.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void k(int x)
{
    double m=0,d=0;
    double V[x];
    for(int i=0 ; i < x ; i++)
    {
        scanf("%lf",&V[i]);
        m = m + V[i];
    }
    m = m / x;
    for(int i=0 ; i < x ; i++) d = d+(V[i]-m)*(V[i]-m)/x;
    return printf("%lf\n",sqrt(d));
}

int main()
{
    int n;
    scanf("%d",&n);
    k(n);

    system("pause");
    return 0;
}
