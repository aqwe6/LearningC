// Write a function that takes by parameter the height and radius of a cylinder circle and return the volume of that cylinder.
// The volume of a circular cylinder is calculated using the following formula: V = π * radius2 * height, where π = 3.1414592

#include<stdio.h>
#include<stdlib.h>

double k ()
{
    double x,y;
    scanf("%lf %lf",&x,&y);
    return printf("%lf\n",3.1414592*x*y*y);
}

int main()
{
    k();

    system("pause");
    return 0;
}
