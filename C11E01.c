// Write a program that shows the size in byte that each data type occupies in memory: char, int, float, double.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("char: %d\n",sizeof(char));
    printf("int: %d\n",sizeof(int));
    printf("float: %d\n",sizeof(float));
    printf("double: %d\n",sizeof(double));

    system("pause");
    return 0;
}
