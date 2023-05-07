// Create a program that contains a float array containing 10 elements. Print the address of each position in this array

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float a[10];
    for(int i = 0 ; i < 10 ; i++) printf("%d\n",&a[i]);

    system("pause");
    return 0;
}
