// Write a program that dynamically allocates an array of integers. The dimensions of the array must be read from the user.
// Then type a function that takes a value and returns 1 if the value is in the array, or returns 0 in the otherwise.

#include<stdio.h>
#include<stdlib.h>

int X(int N)
{
    int a,b,**p;
    scanf("%d%d",&a,&b);
    p = (int **) malloc(a*b*sizeof(int*));
    for(int i=0;i<a;i++)
    {
        p[i] = (int **) malloc(a*b*sizeof(int*));
        for(int j=0;j<b;j++) scanf("%d",&p[i][j]);
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(N == p[i][j]) return printf("1\n");
        }
    }
    return printf("0\n");
}

int main()
{
    int l;
    scanf("%d",&l);
    X(l);

    system("Pause");
    return 0;
}
