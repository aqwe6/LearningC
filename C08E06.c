// Create a structure representing a student of a discipline.
// This structure It must contain the student's registration number, his name and the grades of three tests.
// Now, write a program that reads the data of five students and stores it in this structure.
// Then view the name and grades of the student who has the highest average general among the five.

#include<stdio.h>
#include<stdlib.h>

struct D
{
    double registration,t1,t2,t3;
    char name[100];
};

int main()
{
    struct D a1;
    struct D a2;
    struct D a3;
    struct D a4;
    struct D a5;
    gets(a1.name);
    scanf("%lf %lf %lf",&a1.t1,&a1.t2,&a1.t3);
    gets(a2.name);
    scanf("%lf %lf %lf",&a2.t1,&a2.t2,&a2.t3);
    gets(a3.name);
    scanf("%lf %lf %lf",&a3.t1,&a3.t2,&a3.t3);
    gets(a4.name);
    scanf("%lf %lf %lf",&a4.t1,&a4.t2,&a4.t3);
    gets(a5.name);
    scanf("%lf %lf %lf",&a5.t1,&a5.t2,&a5.t3);
    double media1 = (a1.t1+a1.t2+a1.t3)/3;
    double media2 = (a2.t1+a2.t2+a2.t3)/3;
    double media3 = (a3.t1+a3.t2+a3.t3)/3;
    double media4 = (a4.t1+a4.t2+a4.t3)/3;
    double media5 = (a5.t1+a5.t2+a5.t3)/3;
    if(media1>media2)
    {
        if(media3>media4)
        {
            if(media1>media3)
            {
                if(media1>media5) printf("%s\n%lf\n%lf\n%lf\n",a1.name,a1.t1,a1.t2,a1.t3);
                else printf("%s\n%lf\n%lf\n%lf\n",a5.name,a5.t1,a5.t2,a5.t3);
            }
            else if(media3>media5) printf("%s\n%lf\n%lf\n%lf\n",a3.name,a3.t1,a3.t2,a3.t3);
                else printf("%s\n%lf\n%lf\n%lf\n",a5.name,a5.t1,a5.t2,a5.t3);
        }
        else if(media1>media4)
            {
                if(media1>media5) printf("%s\n%lf\n%lf\n%lf\n",a1.name,a1.t1,a1.t2,a1.t3);
                else printf("%s\n%lf\n%lf\n%lf\n",a5.name,a5.t1,a5.t2,a5.t3);
            }
            else if(media4>media5) printf("%s\n%lf\n%lf\n%lf\n",a4.name,a4.t1,a4.t2,a4.t3);
                else printf("%s\n%lf\n%lf\n%lf\n",a5.name,a5.t1,a5.t2,a5.t3);
    }
    else if(media3>media4)
        {
            if(media2>media3)
            {
                if(media2>media5) printf("%s\n%lf\n%lf\n%lf\n",a2.name,a2.t1,a2.t2,a2.t3);
                else printf("%s\n%lf\n%lf\n%lf\n",a5.name,a5.t1,a5.t2,a5.t3);
            }
            else if(media3>media5) printf("%s\n%lf\n%lf\n%lf\n",a3.name,a3.t1,a3.t2,a3.t3);
                else printf("%s\n%lf\n%lf\n%lf\n",a5.name,a5.t1,a5.t2,a5.t3);
        }
        else if(media2>media4)
            {
                if(media2>media5) printf("%s\n%lf\n%lf\n%lf\n",a2.name,a2.t1,a2.t2,a2.t3);
                else printf("%s\n%lf\n%lf\n%lf\n",a5.name,a5.t1,a5.t2,a5.t3);
            }
            else if(media4>media5) printf("%s\n%lf\n%lf\n%lf\n",a4.name,a4.t1,a4.t2,a4.t3);
                else printf("%s\n%lf\n%lf\n%lf\n",a5.name,a5.t1,a5.t2,a5.t3);


    system("pause");
    return 0;

}
