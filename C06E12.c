// Make a program that reads a 10-position vector. Check for values equals and write them on the screen.

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
    printf("%lf\n",X[0]);
    for(int i = 1; i<=9 ; i++)
    {
        if(X[i]!=X[i-1]) printf("%lf\n",X[i]);
    }



    system("Pause");
    return 0;
}
