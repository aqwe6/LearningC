// Make a program that reads an array of size 6 × 6. Calculate and print the sum of the elements of this matrix that are below the main diagonal.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    double X[6][6];
    int x=0;
    for(int i = 0; i <= 4 ; i++)
    {
        for(int j = 0 ; j <=4 ; j++)
        {
            scanf("%lf",&X[i][j]);
            if(j<i) x = x + X[i][j];

        }

    }

    printf("%d\n",x);


    system("Pause");
    return 0;
}
