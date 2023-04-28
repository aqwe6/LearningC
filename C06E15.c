// Read a vector with 10 floating-point numbers. Then sort the elements of that vector and print the vector on the canvas

#include<stdio.h>
#include<stdlib.h>

int main()
{
    double X[10], y;
    for(int i = 0; i<=9 ; i++)
    {
        scanf("%lf",&X[i]);
    }
    y = X[0];
    for(int i = 0; i<=9 ; i++)
    {
        for(int j = 0; j<= i; j++ )
        {
            if(X[i]<X[j]){
                y = X[i];
                X[i] = X[j];
                X[j] = y;
            }

            }
    }
    for(int i = 0; i<=9 ; i++)
    {
        printf("%lf\n",X[i]);
    }



    system("Pause");
    return 0;
}
