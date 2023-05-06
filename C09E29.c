// Create a structure representing a student of a discipline. This structure It must contain the student's registration number, his name and the grades of three tests.
// Now write a function that receives a vector of size N from this structure. This function should return the index of the student who has the highest overall average among all students.

#include<stdio.h>
#include<stdlib.h>

struct v
{
    char name[100];
    double r,t1,t2,t3;
};

void k(double X[10])
{
    double f=X[0];
    for(int i = 0 ; i<10 ; i++) if(X[i]>f) f = X[i];
    printf("%lf\n",f);
}

int main()
{
    struct v s;
    double A[10];
    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%s%lf%lf%lf%lf",&s.name,&s.r,&s.t1,&s.t2,&s.t3);
        A[i] = (s.t1+s.t2+s.t3)/3;
    }
    k(A);

    system("pause");
    return 0;
}
