//Make a program that determines and shows the first five multiples of 3 considering numbers greater than 0.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(int i = 1; i <= 15 ; i++)
    {
        if(i%3==0) printf("%d\n",i);
    }
    system("pause");
    return 0;
}
