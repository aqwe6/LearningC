// Create a structure representing an hour. This structure must contain the fields hour, minute, and second.
// Now, write a program that reads a vector of five positions of this structure and print the longest hour.

#include<stdio.h>
#include<stdlib.h>

struct H
{
    int hour,minute,second;
};

int main()
{
    struct H x[5];
    int a=-1,b=-1,c=-1;
    for(int i = 0 ; i < 5 ; i++)
    {
        scanf("%d%d%d",&x[i].hour,&x[i].minute,&x[i].second);
        if(x[i].hour > a)
        {
            a = x[i].hour;
            b = x[i].minute;
            c = x[i].second;
        }
        else if(x[i].hour == a)
        {
            if(x[i].minute > b)
            {
                b = x[i].minute;
                c = x[i].second;
            }
            else if(x[i].minute == b)
            {
                if(x[i].second > c) c = x[i].second;
            }
        }
    }
    printf("%dH %dM %dS\n",a,b,c);


    system("pause");
    return 0;

}
