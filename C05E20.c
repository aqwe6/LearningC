// Make a program that reads an integer and positive value N, calculates and shows the value And, according to the following formula:
// E=1/1!+1/2!+1/3!+...+1/N!

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,y=1,z=0;
    scanf("%lf",&x);
    for(double i=1 ; i<=x ; i++)
    {
        for(double j=1; j<=i ; j++){
            y=y*j;
        }
        z=z+1/y;
        y=1;
    }
    printf("%lf",z);

    system("pause");
    return 0;
}
