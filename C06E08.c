//Make a program that fills a vector with 10 real numbers. Then Calculate and show on the screen the amount of negative numbers and the sum of the numbers positive of this vector.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A[10];
    int y=0,z=0;

    for(int i = 0; i<=9; i++)
    {
        scanf("%lf",&A[i]);
        if(A[i] < 0){
            y++;
        }
        if(A[i]> 0) z=z+A[i];

    }
    printf("negative numbers %d\n",y);
    printf("sum of the numbers positive %d\n",z);

    system("pause");
    return 0;
}
