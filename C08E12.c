// Create an enumeration representing the days of the week. Now, write a program that reads an integer value from the keyboard and displays the corresponding day of the week

#include<stdio.h>
#include<stdlib.h>

enum week {sunday=1,monday=2,tuesday=3,wednesday=4,thursday=5,friday=6,saturday=7};

int main()
{
    enum week s;
    scanf("%d",&s);
    if(s==1) printf("sunday\n");
    else if(s==2) printf("monday\n");
    else if(s==3) printf("tuesday\n");
    else if(s==4) printf("wednesday\n");
    else if(s==5) printf("thursday\n");
    else if(s==6) printf("friday\n");
    else printf("saturday\n");

    system("pause");
    return 0;

}
