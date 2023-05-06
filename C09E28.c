// Make a function that receives, by parameter, an array A containing six rows and six columns.
// This function must return, by reference, the sum of the elements of the its main diagonal and its secondary diagonal.

#include<stdio.h>
#include<stdlib.h>

void k(int X[6][6])
{
    int b=0,c=0;
    for(int i=0 ; i<6 ; i++)
    {
        b = b + X[i][i];
        c = c + X[5-i][i];
    }
    printf("%d\n%d\n",b,c);
}

int main()
{
    int A[6][6];
    for(int i=0 ; i<6 ; i++)
    {
        for(int j=0 ; j<6 ; j++) scanf("%d",&A[i][j]);
    }

    k(A);

    system("pause");
    return 0;
}
