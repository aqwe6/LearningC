// Read a matrix of size 10 × 3 with the grades of 10 students on three tests.
// In Then calculate and write on the screen the number of students whose worst score was in test 1, the number of students whose worst score was on test 2 and the number of students whose worst grade was in test 3.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    double X[10][3],Y[1][10];
    int x=0,y = 0,z=0;
    for(int i = 0; i <= 9 ; i++)
    {
        for(int j = 0 ; j <=2 ; j++)
        {
            scanf("%lf",&X[i][j]);
            if(j == 0) Y[0][i] = X[i][0];
            if(X[i][j]<Y[0][i]) Y[0][i] = X[i][j];
        }

    }
    for(int i = 0; i <= 9 ; i++)
    {
        for(int j = 0 ; j <=2 ; j++)
        {
            if(Y[0][i]==X[i][j]){
                if(j==0) x++;
                if(j==1) y++;
                if(j==2) z++;
            }
        }

    }
    printf("Test 1: %d\n",x);
    printf("Test 2: %d\n",y);
    printf("Test 3: %d\n",z);

    system("Pause");
    return 0;
}
