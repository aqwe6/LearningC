// Create a structure to represent the coordinates of a point in the plane (positions X and Y).
// Then declare and read from the keyboard two dots and display the distance among them.

#include<stdio.h>
#include<stdlib.h>

struct A
{
    int x,y;
};

int main()
{
    struct A B;
    struct A C;
    scanf("%d %d",&B.x,&B.y);
    scanf("%d %d",&C.x,&C.y);
    if(B.x>=0 && C.x >=0) printf("(%d,",B.x-C.x);
    else if(B.x<=0 && C.x >=0) printf("(%d,",-B.x+C.x);
    else if(B.x>=0 && C.x <=0) printf("(%d,",B.x-C.x);
    else if(B.x>C.x && B.x<=0 && C.x<=0) printf("(%d,",B.x-C.x);
    else printf("(%d,",-B.x+C.x);

    if(B.y>=0 && C.y >=0) printf("%d)\n",B.y-C.y);
    else if(B.y<=0 && C.y >=0) printf("%d)\n",-B.y+C.y);
    else if(B.y>=0 && C.y <=0) printf("%d)\n",B.y-C.y);
    else if(B.y>C.y && B.y<=0 && C.y<=0) printf("%d)\n",B.y-C.y);
    else printf("%d)\n",-B.y+C.y);



    system("pause");
    return 0;

}
