// Make a program that has an array named A that stores six numbers Whole. The program should perform the following steps:
// a) Assign the following values to this array: 1, 0, 5, −2, −5, 7.
// b) Store in a variable the sum of the values of positions A[0], A[1] and A[5] of the array and show this sum on the screen.
// c) Modify the array at position 4 by assigning to that position the value 100.
// d) Show on the screen each value of array A, one in each row.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[6],y;
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;
    y=A[0]+A[1]+A[5];
    printf("%d\n",y);
    A[3]=100;
    for(int i = 0; i<=5;i++) printf("%d\n",A[i]);

    system("pause");
    return 0;
}
