// Elaborate a function that takes three integers as a parameter, representing hours, minutes, and seconds. The function should return this converted time in seconds.

#include<stdio.h>
#include<stdlib.h>

int k ()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    return printf("%d\n",x*3600+y*60+z);
}

int main()
{
    k();

    system("pause");
    return 0;
}
