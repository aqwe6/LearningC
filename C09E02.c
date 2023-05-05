// Make a function that receives an integer from 1 to 12 and print on the screen the month and its number of days according to the number entered by the user. Example: Input = 4. Output = April.

#include<stdio.h>
#include<stdlib.h>

int k ()
{
    int x;
    do
    {
        scanf("%d",&x);
    }while(x<1 || x >12);
    return x;
}

int main()
{
    int y = k();
    if(y == 1) printf("January\n");
    if(y == 2) printf("Febuary\n");
    if(y == 3) printf("March\n");
    if(y == 4) printf("April\n");
    if(y == 5) printf("May\n");
    if(y == 6) printf("June\n");
    if(y == 7) printf("July\n");
    if(y == 8) printf("Agost\n");
    if(y == 9) printf("September\n");
    if(y == 10) printf("October\n");
    if(y == 11) printf("November\n");
    if(y == 12) printf("December\n");

    system("pause");
    return 0;
}
