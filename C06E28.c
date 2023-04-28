// Make a program that reads an array of size 5 × 5. Calculate and print the sum of the elements of this matrix that do not belong to the main diagonal or to the secondary diagonal.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    double X[5][5];
    int x=0,y=0;
    for(int i = 0; i <= 4 ; i++)
    {
        for(int j = 0 ; j <=4 ; j++)
        {
            scanf("%lf",&X[i][j]);
            if(j==i) x = x + X[i][j];
            else if(j+i==4) x = x + X[i][j];
            else y = y + X[i][j];
        }

    }

    printf("%d\n",y);


    system("Pause");
    return 0;
}
