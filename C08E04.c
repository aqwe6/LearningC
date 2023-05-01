// Create a structure called Rectangle.
// This structure should contain the upper-left and lower-right point of the rectangle.
// Each point is defined by a Point structure, which contains the positions X and Y. declare and read a Rectangle structure and display the area and length of the diagonal and the perimeter of that rectangle.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Rectangle
{
    int x,y;
};

int main()
{
    struct Rectangle upper_left;
    struct Rectangle lower_right;
    int a,b=0;
    scanf("%d %d",&upper_left.x,&upper_left.y);
    scanf("%d %d",&lower_right.x,&lower_right.y);
    if(upper_left.x<lower_right.x) a = (lower_right.x-upper_left.x);
    else a = (upper_left.x-lower_right.x);

    if(upper_left.y<lower_right.y) b=(lower_right.y-upper_left.y);
    else b=(upper_left.y-lower_right.y);

    printf("area: %d\ndiagonal: %lf\nperimeter: %d\n",a*b,sqrt(a*a+b*b),(a+b)*2);

    system("pause");
    return 0;

}
