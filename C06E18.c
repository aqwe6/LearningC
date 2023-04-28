// Make a program that declares an array of size 5 × 5. Fill in with 1 to main diagonal and with 0 the other elements. At the end, write the obtained matrix on the screen.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    double X[5][5];
    for(int i = 0; i <= 4 ; i++)
    {
        for(int j = 0 ; j <=4 ; j++)
        {
            if(i==j) X[i][j]=1;
            else X[i][j]=0;
            printf(" %lf ",X[i][j]);

        }
        printf("\n");

    }



    system("Pause");
    return 0;
}
