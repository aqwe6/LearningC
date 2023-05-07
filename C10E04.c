// Create a program that contains a float array containing three rows and three Columns. Print the address of each position in this array

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float a[3][3];
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j <3 ; j++) printf("%d\n",&a[i][j]);
    }
    system("pause");
    return 0;
}
