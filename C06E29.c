// Make a program that reads an array of size 5 × 5. 
// Calculate the sum of the elements of this array that belong to the primary or secondary diagonal.
// Calculate also the sum of the elements that do not belong to either of the two diagonals. 
// Print on the screen the difference between the two values.

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

    printf("%d\n",y-x);


    system("Pause");
    return 0;
}
