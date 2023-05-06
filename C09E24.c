// Write a function that receives an array containing the grade of 10 students and returns the average student.

#include<stdio.h>
#include<stdlib.h>

void k()
{
    double b = 0;
    double a[10];
    for(int i = 0 ; i<10 ; i++) scanf("%lf",&a[i]);
    for(int i = 0 ; i<10 ; i++) b = b + a[i];
    printf("%lf\n",b/10);
}

int main()
{
    k();

    system("pause");
    return 0;
}
