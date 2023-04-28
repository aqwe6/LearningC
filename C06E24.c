// Make a program that allows the user to enter with a size 3x3 array of integers.
// Then calculate a vector containing three positions, in that each position should store the sum of the numbers in each column of the matrix.
// Display this array on the screen. For example, the array
//  5  -8  10
//  1   2  15
// 25  10   7
// should generate the vector
// 31   4  32

#include<stdio.h>
#include<stdlib.h>

int main()
{
    double X[3][3],Y[1][3];
    int y = 0;
    for(int i = 0; i <= 2 ; i++)
    {
        for(int j = 0 ; j <=2 ; j++)
        {
            scanf("%lf",&X[i][j]);

        }

    }
    for(int i = 0; i <= 2 ; i++)
    {
        for(int j = 0 ; j <=2 ; j++)
        {
            Y[0][i] = Y[0][i] + X[j][i];
        }

    }

    for(int i = 0 ; i <= 2 ; i++) printf(" %lf ",Y[0][i]);

    system("Pause");
    return 0;
}
