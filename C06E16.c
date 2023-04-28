// Make a program that reads an array of size 3 × 3. Print on the screen the smallest value contained in this array.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    double X[3][3], y;
    for(int i = 0; i <= 2 ; i++)
    {
        for(int j = 0 ; j <=3 ; j++)
        {
            scanf("%lf",&X[i][j]);
            if(i==0 && j== 0) y = X[0][j];
            if(X[i][j] < y) y = X[i][j];
        }


    }
    printf("%lf\n",y);


    system("Pause");
    return 0;
}
