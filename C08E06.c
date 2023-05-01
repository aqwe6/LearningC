// Create a structure representing a student of a discipline.
// This structure It must contain the student's registration number, his name and the grades of three tests.
// Now, write a program that reads the data of five students and stores it in this structure.
// Then view the name and grades of the student who has the highest average general among the five.

#include<stdio.h>
#include<stdlib.h>

struct D
{
    double registration,t1,t2,t3,media;
    char name[100];
};

int main()
{
    struct D a[5];
    int x=0,y=0;
    for(int i = 0; i<5;i++)
    {
        gets(a[i].name);
        scanf("%lf %lf %lf %lf",&a[i].registration,&a[i].t1,&a[i].t2,&a[i].t3);
        a[i].media = (a[i].t1 + a[i].t2 + a[i].t3)/3;
        if(a[i].media>x)
        {
            x = a[i].media;
            y = i;
        }
    }
    printf("%s %lf %lf %lf\n",a[y].name,a[y].t1,a[y].t2,a[y].t3);
    system("pause");
    return 0;

}
