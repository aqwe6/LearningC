// Write a program that reads a positive integer N and then print N lines from the so-called Floyd triangle:
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y=0,z=0;
    scanf("%d",&x);
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=i;j++)
        {
            z++;
            printf("%d ",z);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
