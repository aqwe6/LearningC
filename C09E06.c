// Write a function that receives the weight (kilograms) and height (meters) of a person. Calculate and return that person's BMI (body mass index): BMI = weight/(height * height)

#include<stdio.h>
#include<stdlib.h>

double k ()
{
    double x,y;
    scanf("%lf %lf",&x,&y);
    return printf("%lf\n",x/(y*y));
}

int main()
{
    k();

    system("pause");
    return 0;
}
