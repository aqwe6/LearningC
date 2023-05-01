// Create a structure representing an athlete. This structure must contain the name of the athlete, his sport, age and height.
// Now, write a program that reads the data from five athletes. Calculate and display the names of the tallest and most tallest athlete old.

#include<stdio.h>
#include<stdlib.h>

struct athlete
{
    int day,month,year;
    double height;
    char name[100],sport[100];
};

int main()
{
    struct athlete x[5];
    int a=0,b=0,c=0,y=0,z=0,w=0;

    for(int i = 0 ; i < 5 ; i++)
    {
        gets(x[i].name);
        gets(x[i].sport);
        scanf("%d%d%d%lf",&x[i].day,&x[i].month,&x[i].year,&x[i].height);
        if(i==0)
        {
            a = x[0].year;
            b = x[0].month;
            c = x[0].day;
        }
        if(x[i].year < a)
        {
            a = x[i].year;
            b = x[i].month;
            c = x[i].day;
            y = i;
        }
        else if(x[i].year == a)
        {
            if(x[i].month > b)
            {
                b = x[i].month;
                c = x[i].day;
                y = i;
            }
            else if(x[i].month == b)
            {
                if(x[i].day > c)
                {
                    c = x[i].day;
                    y = i;
                }

            }
        }
        if(x[i].height>z)
        {
            z = x[i].height;
            w=i;
        }
    }
    printf("%s %dD/%dM/%dY\n",x[y].name,x[y].day,x[y].month,x[y].year);
    printf("%s %lfH",x[w].name,x[w].height);


    system("pause");
    return 0;

}
