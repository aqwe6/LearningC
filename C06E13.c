// Make a program to read 10 different numbers to be stored in a vector.
// The numbers should be stored in the vector in the order in which they are read, and if the user enters a number that has already been typed previously, the program should ask him to enter another number.
// Note that each value typed by the user should be searched in the vector, checking if it exists between the numbers that have already been provided.
// Display on the screen the final vector that was typed.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    double X[10], y;
    for(int i = 0; i<=9 ; i++)
    {
        scanf("%lf",&X[i]);
        for(int j = 0; j<=i-1 ; j++)
        {
            if(X[i]==X[j])
            {
                printf("enter another number\n");
                i--;
                break;
            }

        }
    }

    for(int i = 0 ; i <= 9 ; i++)
    {
        printf("%lf\n",X[i]);


    }



    system("Pause");
    return 0;
}
