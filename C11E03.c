// Create a structure called Registration. This structure must contain the name, the age and a person's address.
// Now write a function that takes a positive integer N and returns the pointer to a dynamically allocated vector of size N of that structure.
// Also ask the user to enter the data for this vector within function.

#include<stdio.h>
#include<stdlib.h>

struct Registration
{
    char name;
    int age,address;
};

int X(unsigned int N)
{
    int *p;
    for(int i=0;i<N;i++) scanf("%d",&p[i]);
    return p=(int *) malloc(N*sizeof(int));
}

int main()
{
    int a;
    scanf("%d",&a);
    X(a);

    system("Pause");
    return 0;
}
