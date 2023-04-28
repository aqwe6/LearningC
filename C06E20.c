// Read an array of size 4 × 4. Then count and write on the screen how many negative values it has.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    double X[4][4];
    int y = 0;
    for(int i = 0; i <= 3 ; i++)
    {
        for(int j = 0 ; j <=3 ; j++)
        {
            scanf("%lf",&X[i][j]);
            if(X[i][j]< 0) y++;

        }
    }
    printf("%d\n",y);


    system("Pause");
    return 0;
}
