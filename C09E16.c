// Elaborate a function that takes as a parameter an integer value n and generates as output a lateral triangle formed by asterisks as in the following example, where we use n = 4:
// *
// **
// ***
// ****
// ***
// **
// *

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int k (int n)
{
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i = n - 1 ; i >= 1; i--)
    {
        for(int j = i ; j >= 1 ; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int a;
    scanf("%d",&a);
    printf("%s\n",k(a));

    system("pause");
    return 0;
}
