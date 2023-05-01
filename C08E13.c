// Create an enumeration representing the months of the year.
// Now, write a program that reads an integer value from the keyboard and displays the name of the corresponding month, and how many days he has.

#include<stdio.h>
#include<stdlib.h>

enum year {january,febuary,march,april,may,june,july,agost,september,october,november,december};

int main()
{
    enum year s;
    scanf("%d",&s);
    if(s==1) printf("january 31\n");
    else if(s==2) printf("febuary 28\n");
    else if(s==3) printf("march 31\n");
    else if(s==4) printf("april 30\n");
    else if(s==5) printf("may 31\n");
    else if(s==6) printf("june 30\n");
    else if(s==7) printf("july 31\n");
    else if(s==8) printf("agost 31\n");
    else if(s==9) printf("september 30\n");
    else if(s==10) printf("october 31\n");
    else if(s==11) printf("november 30\n");
    else printf("december 31\n");

    system("pause");
    return 0;

}
