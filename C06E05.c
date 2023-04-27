// Make a program that reads an eight-position vector. Then also read two any X and Y values corresponding to two positions in the vector. Your program should display the sum of the values found in the respective X and Y positions.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[8],x,y;

    for(int i = 0; i<=5; i++)
    {
        scanf("%d",&A[i]);
    }
    scanf("%d%d",&x,&y);
    printf("%d\n",A[x-1]+A[y-1]);
    system("pause");
    return 0;
}
