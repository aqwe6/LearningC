// Design a program that reads from the user the size of a vector to be read. In Then dynamically allocate that vector.
// Finally, read the user vector and the Print.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,a[n],*p;
    scanf("%d",&n);
    p = (int *) malloc(n*sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",&p[i]);
    for(int i=0;i<n;i++) printf("%d\n",p[i]);

    system("Pause");
    return 0;
}
