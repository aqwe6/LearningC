// Write a program that reads two strings and prints them in alphabetical order, the order in which they would appear in a dictionary.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s1[100],s2[100];
    printf("String 1 : ");
    gets(s1);
    printf("String 2 : ");
    gets(s2);
    for(int i = 0 ; i <= 99 ; i++)
    {
        if( (s1[i]>64 && s1[i]<91 && s2[i]>96 && s2[i]<123))
        {
            if(s1[i]<s2[i]-32)
            {
                printf("%s\n",s1);
                printf("%s",s2);
                break;
            }
            else if(s1[i]>s2[i]-32)
            {
                printf("%s\n",s2);
                printf("%s",s1);
                break;
            }

        }
        else if( (s2[i]>64 && s2[i]<91 && s1[i]>96 && s1[i]<123))
        {
            if(s2[i]<s1[i]-32)
            {
                printf("%s\n",s2);
                printf("%s",s1);
                break;
            }
            else if(s2[i]>s1[i]-32)
            {
                printf("%s",s1);
                printf("%s\n",s2);
                break;
            }

        }
            else if(s1[i]<s2[i])
            {
                printf("%s\n",s1);
                printf("%s",s2);
                break;
            }
            else if(s1[i]>s2[i])
            {
                printf("%s\n",s2);
                printf("%s",s1);
                break;
            }
        if(i==99){
            printf("%s\n",s1);
            printf("%s",s1);
        }
    }
    printf("\n");
    system("pause");
    return 0;

}
