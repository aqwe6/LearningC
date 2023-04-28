// Calculate and print on the screen a matrix of size 10 × 10, where its elements are of the shape:
// A[i][j] = 2i+7j-2 if i<j
// A[i][j] = 3i^2-1 if i=j
// A[i][j] = 4i^3+5j^2+1 if i>j

#include<stdio.h>
#include<stdlib.h>

int main()
{
    double X[10][10];
    int y = 0;
    for(int i = 0; i <= 9 ; i++)
    {
        for(int j = 0 ; j <=9 ; j++)
        {
            if(i<j) X[i][j] = 2*i+7*j-2;
            if(i==j) X[i][j] = 3*i*i-1;
            if(i>j) X[i][j] = 4*i*i*i+5*j*j+1;
            printf(" %lf ",X[i][j]);
        }
        printf("\n");
    }

    system("Pause");
    return 0;
}
