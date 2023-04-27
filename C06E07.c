//Make a program that receives from the user a vector X with 10 positions. Then the largest and smallest elements of this vector should be printed

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[10],x,y=0,z=0;

    for(int i = 0; i<=9; i++)
    {
        scanf("%d",&A[i]);
        if(i == 0){
            z=A[0];
            y=A[0];
        }
        if(A[i]>z) z=A[i];
        if(y>A[i]) y=A[i];
    }
    printf("largest %d\n",z);
    printf("smallest %d\n",y);

    system("pause");
    return 0;
}
