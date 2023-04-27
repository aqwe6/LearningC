//Using the switch command, write a program that reads an integer between 1 and 7 and print the day of the week corresponding to that number. That is, Sunday, if 1, Monday, if 2, and so on.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    case 4:
        printf("Wednesday\n");
        break;
    case 5:
        printf("Thurday\n");
        break;
    case 6:
        printf("Friday\n");
        break;
    default :
        printf("Saturday\n");
    }

    system("pause");
    return 0;
}
