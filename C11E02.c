// Create a structure representing a student of a discipline.
// This structure It must contain the student's registration number, his name and the grades of three tests.
// Write a program that shows the byte size of this structure.

#include <stdio.h>
#include <stdlib.h>

struct k
{
    char name[50];
    double r,t1,t2,t3;
};

int main()
{
    printf("%d\n",sizeof(struct k));

    system("pause");
    return 0;
}
