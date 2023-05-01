// Write a program that contains a structure representing a valid date. This structure must contain the day, month, and year fields.
// Then read two dates and store in that structure. Calculate and display the number of days that have elapsed between the two dates.

#include<stdio.h>
#include<stdlib.h>

struct date
{
    int day,month,year;
};

int main()
{
    int xm,ym,a,b,xy=0,yy=0;
    struct date x[2];
    scanf("%d%d%d",&x[0].day,&x[0].month,&x[0].year);
    scanf("%d%d%d",&x[1].day,&x[1].month,&x[1].year);
    for(int i = 0 ; i <= x[0].year ; i++)
    {
        if(i%4==0)
        {
            xy = xy + 366;
        }
        else
        {
            xy = xy +365;
        }
    }
    for(int i = 0 ; i <= x[1].year ; i++)
    {
        if(i%4==0)
        {
            yy = yy + 366;
        }
        else
        {
            yy = yy +365;
        }
    }
    if(x[0].year % 4 == 0)
    {
        if(x[0].month == 2) xm = 31;
        if(x[0].month == 3) xm = 60;
        if(x[0].month == 4) xm = 91;
        if(x[0].month == 5) xm = 121;
        if(x[0].month == 6) xm = 152;
        if(x[0].month == 7) xm = 182;
        if(x[0].month == 8) xm = 213;
        if(x[0].month == 9) xm = 244;
        if(x[0].month == 10) xm = 274;
        if(x[0].month == 11) xm = 305;
        if(x[0].month == 12) xm = 335;
    }
    else
    {
        if(x[0].month == 2) xm = 31;
        if(x[0].month == 3) xm = 59;
        if(x[0].month == 4) xm = 90;
        if(x[0].month == 5) xm = 120;
        if(x[0].month == 6) xm = 151;
        if(x[0].month == 7) xm = 181;
        if(x[0].month == 8) xm = 212;
        if(x[0].month == 9) xm = 243;
        if(x[0].month == 10) xm = 273;
        if(x[0].month == 11) xm = 304;
        if(x[0].month == 12) xm = 334;
    }
    a = xy+xm+x[0].day;
    if(x[1].year % 4 == 0)
    {
        if(x[1].month == 2) ym = 31;
        if(x[1].month == 3) ym = 60;
        if(x[1].month == 4) ym = 91;
        if(x[1].month == 5) ym = 121;
        if(x[1].month == 6) ym = 152;
        if(x[1].month == 7) ym = 182;
        if(x[1].month == 8) ym = 213;
        if(x[1].month == 9) ym = 244;
        if(x[1].month == 10) ym = 274;
        if(x[1].month == 11) ym = 305;
        if(x[1].month == 12) ym = 335;
    }
    else
    {
        if(x[1].month == 2) ym = 31;
        if(x[1].month == 3) ym = 59;
        if(x[1].month == 4) ym = 90;
        if(x[1].month == 5) ym = 120;
        if(x[1].month == 6) ym = 151;
        if(x[1].month == 7) ym = 181;
        if(x[1].month == 8) ym = 212;
        if(x[1].month == 9) ym = 243;
        if(x[1].month == 10) ym = 273;
        if(x[1].month == 11) ym = 304;
        if(x[1].month == 12) ym = 334;
    }
    b = yy+ym+x[1].day;
    if(a-b < 0) printf("%d",b-a);
    else printf("%d",a-b);

    system("pause");
    return 0;

}
