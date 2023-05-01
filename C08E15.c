// Create a union containing two different basic types.
// Now, write a program that initializes one of the types of this union and displays on screen the value of the other type

#include<stdio.h>
#include<stdlib.h>

union tipo
{
    short int x;
    unsigned char c;
};

int main()
{
    union tipo t;
    t.x = 1545;
    printf("%d\n",t.x);
    printf("%d\n",t.c);

    system("pause");
    return 0;

}
