// Create a structure representing an athlete. This structure must contain the name of the athlete, his sport, age and height.
// Now, write a program that reads the data from five athletes. Calculate and display the names of the tallest and most tallest athlete old.

#include<stdio.h>
#include<stdlib.h>

struct athlete
{
    int day,month,year;
    char name[100];
};

int main()
{
    struct athlete x[5];
    int a=0,b=0,c=0,y=0,z=0,w=0;

    for(int i = 0 ; i < 5 ; i++)
    {
        scanf("%s%d%d%d",&x[i].name,&x[i].day,&x[i].month,&x[i].year);
    }
    a = x[0].year;
    b = x[0].month;
    c = x[0].day;

    for(int i = 0 ; i < 5 ; i++)
    {
        for(int j = 0; j < 5 ; j++)
        {
            if(x[i].year > x[j].year)
            {
                a = x[j].year;
                x[j].year = x[i].year;
                x[i].year = a;
                b = x[j].month;
                x[j].month = x[i].month;
                x[i].month = b;
                c = x[j].day;
                x[j].day = x[i].day;
                x[i].day = c;
            }
            else if(x[i].year == x[j].year)
            {
                if(x[i].month > x[j].month)
                {
                    b = x[j].month;
                    x[j].month = x[i].month;
                    x[i].month = b;
                    c = x[j].day;
                    x[j].day = x[i].day;
                    x[i].day = c;
                }
                else if(x[i].month == x[j].month)
                {
                    if(x[i].day > x[j].day)
                    {
                        c = x[j].day;
                        x[j].day = x[i].day;
                        x[i].day = c;
                    }

                }
            }
        }
    }
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("%dD/%dM/%dY\n",x[i].day,x[i].month,x[i].year);
    }



    system("pause");
    return 0;

}
