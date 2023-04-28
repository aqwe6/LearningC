// Make a program that reads an array of size 4 × 4. Print on the screen the largest value contained in this array and its location (row and column).

#include<stdio.h>
#include<stdlib.h>

int main()
{
    double X[4][4], y;
    int z,w;
    for(int i = 0; i <= 3 ; i++)
    {
        for(int j = 0 ; j <=3 ; j++)
        {
            scanf("%lf",&X[i][j]);
            if(i==0 && j== 0) y = X[0][j];
            if(X[i][j] > y) {
                    y = X[i][j];
                    z = i;
                    w = j;
            }

        }


    }
    printf("%lf  [%d][%d]\n",y,z,w);


    system("Pause");
    return 0;
}
