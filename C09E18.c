// Make a function that takes as a parameter the value of an angle in degrees and calculate the sine value of this angle using its respective Taylor series:
// sen x = x - x^3/3! + x^5/5!...
// where x is the value of the angle in radians. Consider π = 3.1414592 and n varying from 0 to 5.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double k (double x)
{
    double d = x,e = x;
    for(double i = 1 ; i <= 5 ; i++)
    {
        e = e*x*x/(2*i*(2*i+1))*(-1);
        d = d + e;
    }

    return d;
}

int main()
{

    double a;
    scanf("%lf",&a);
    printf("%lf\n",k(a));

    system("pause");
    return 0;
}
