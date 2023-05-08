// Make a function that returns the pointer to a vector of N integer elements dynamically allocated. The array must be populated with values from 0 to N − 1.

#include<stdio.h>
#include<stdlib.h>

int X(int N)
{
    int *p;
    for(int i=0;i<N;i++) p[i] = i;
    p = (int *) malloc(N*sizeof(int));
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
