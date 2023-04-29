// Implement a program that reads a person's name, age, and address andstore this data in a structure.
//  Then print the data from the screen on the screen.read structure.

#include<stdio.h>
#include<stdlib.h>

struct X {
    char name[100];
    int age;
    char address[100];
};

int main()
{
    struct X Y;
    gets(Y.name);
    scanf("%d",&Y.age);
    scanf("%s",&Y.address);
    
    printf("%s\n%d\n",Y.name,Y.age);
    printf("%s\n",Y.address);
    return 0;
}
