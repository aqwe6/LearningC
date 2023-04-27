//Make a program to check if a certain integer read is divisible by 3 or 5, but not simultaneously by both.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter one number:\n");
    scanf("%d",&a);
    if(a%3==0 || a%5 == 0){
        if(a%15==0) printf("No");
        else printf("Yes");
    }
    else printf("No :(");

    system("pause");
    return 0;
}
