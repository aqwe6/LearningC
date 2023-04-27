//Read a set of real numbers by storing it in vector. Then calculate the square of each element of that vector by storing that result in another vector. Sets have a maximum of 20 elements. Print both sets of numbers.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A[20],B[20];
    for(int i = 0; i<=19; i++)
    {
        scanf("%lf",&A[i]);
        B[i]=A[i]*A[i];
    }
    for(int i = 0; i<=19 ; i++)
    {
        printf("%lf %lf\n",A[i],B[i]);

    }



    system("pause");
    return 0;
}
