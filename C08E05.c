// Using the Rectangle structure from the previous exercise, make a program that declares and reads a Rectangle structure and a Point, and tells you whether or not that point is inside the rectangle.

#include<stdio.h>
#include<stdlib.h>

struct Rectangle
{
    int x,y;
};

int main()
{
    struct Rectangle upper_left;
    struct Rectangle lower_right;
    struct Rectangle point;
    int a,b;
    scanf("%d %d",&upper_left.x,&upper_left.y);
    scanf("%d %d",&lower_right.x,&lower_right.y);
    scanf("%d %d",&point.x,&point.y);

    a = (upper_left.x-lower_right.x);
    b=(upper_left.y-lower_right.y);
    int diagonal = (a*a+b*b);

    if((upper_left.x-point.x)^2+(upper_left.y-point.y)^2 < diagonal && (lower_right.x-point.x)^2+(lower_right.y-point.y)^2 < diagonal) printf("Inside\n");
    else printf("Outside\n");

    system("pause");
    return 0;

}
