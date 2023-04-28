// Read an array of size 3 × 3. Then print the sum of the values contained in its secondary diagonal.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    double X[3][3];
    int y = 0;
    for(int i = 0; i <= 2 ; i++)
    {
        for(int j = 0 ; j <=2 ; j++)
        {
            scanf("%lf",&X[i][j]);
            if(i+j==2) y = y + X[i][j];

        }
    }
    printf("%d\n",y);


    system("Pause");
    return 0;
}
