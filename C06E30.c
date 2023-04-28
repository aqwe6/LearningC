// Make a program that reads an A matrix of size 5 × 5. Then calculate and print the matrix B, where B = A^2.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    double A[5][5],B[5][5];
    int x=0,y=0;
    for(int i = 0; i <= 4 ; i++)
    {
        for(int j = 0 ; j <=4 ; j++)
        {
            scanf("%lf",&A[i][j]);
            B[i][j]=A[i][j]*A[i][j];
        }
    }
    for(int i = 0; i <= 4 ; i++)
    {
        for(int j = 0 ; j <=4 ; j++)
        {
            printf(" %lf ",B[i][j]);
        }
        printf("\n");
    }



    system("Pause");
    return 0;
}
