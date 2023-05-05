// Write a function that takes by parameter a temperature in degrees Fahrenheit and the return converted to degrees Celsius.
// The conversion formula is: C = (F – 32.0) * (5.0/9.0), where F is the temperature in Fahrenheit and C is the temperature in Celsius.

#include<stdio.h>
#include<stdlib.h>

double k ()
{
    double x;
    scanf("%lf",&x);
    return (x-32)*5/9;
}

int main()
{
    printf("%lf\n",k());

    system("pause");
    return 0;
}
