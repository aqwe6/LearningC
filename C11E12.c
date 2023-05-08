// Type a function that takes an N value as a parameter and returns the pointer for a dynamically allocated array containing N rows and N columns.
// Catafalque array must contain the value 1 on the secondary diagonal and 0 on the other positions.

#include<stdio.h>
#include<stdlib.h>

int X(int N)
{
    int **p;
    p = (int **) malloc(N*sizeof(int*));
    for(int i=0;i<N;i++)
    {
        p[i] = (int *) malloc((i+1)*sizeof(int));
        for(int j=0;j<N;j++)
        {
            if(i+j == N-1) p[i][j] = 1;
            else p[i][j] = 0;
        }
    }
    return printf("%d\n",*p);
}

int main()
{
    int l;
    scanf("%d",&l);
    X(l);

    system("Pause");
    return 0;
}
