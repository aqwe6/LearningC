// Create a structure to represent the coordinates of a point in the plane (positions X and Y).
// Then declare and read from the keyboard a point and display the distance from there to the origin of the coordinates, that is, the position (0,0).

#include<stdio.h>
#include<stdlib.h>

struct A
{
    int x,y;
};

int main()
{
    struct A B;
    scanf("%d %d",&B.x,&B.y);
    if(B.x>=0 && B.y >=0) printf("(%d,%d)\n",B.x,B.y);
    else if(B.x<=0 && B.y >=0) printf("(%d,%d)\n",-B.x,B.y);
    else if(B.x>=0 && B.y <=0) printf("(%d,%d)\n",B.x,-B.y);
    else printf("(%d,%d)\n",-B.x,-B.y);

    system("pause");
    return 0;

}
