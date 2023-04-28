// Make a program that calculates the standard deviation d of a vector V containing n numbers where m is the mean of that vector. Consider n = 10. The vector v must be read from the keyboard.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    double A[10],z=0,m,d=0,e;

    for(int i = 0; i <= 9 ; i++)
    {
        scanf("%lf",&A[i]);
        z=z+A[i];
    }
    m=z/10;
    printf("%lf\n",sqrt(m)/3);

    system("pause");
    return 0;
}
