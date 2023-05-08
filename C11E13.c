// Write a program that reads an integer N and create a dynamically allocated array containing N rows and N columns.
// This array must contain the value 0 in the main diagonal, the value 1 in the elements above the main diagonal, and the value −1 in the elements below the main diagonal.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);
    int **p;
    p = (int **) malloc(N*sizeof(int*));
    for(int i=0;i<N;i++)
    {
        p[i] = (int *) malloc((i+1)*sizeof(int));
        for(int j=0;j<N;j++)
        {
            if(i==j) p[i][j] = 0;
            else if(i>j) p[i][j] = -1;
            else p[i][j] = 1;
        }
    }

    printf("%d\n",*p);

    system("Pause");
    return 0;
}
