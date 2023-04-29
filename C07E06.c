// Read a string from the keyboard and count how many vowels (a, e, i, o, u) it has.
// Between with one character (vowel or consonant) and replace all vowels of the given word by that character.
// At the end, print the new string and the number of vowels it has Has.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char X[10],z;
    int y=0,w=0;
    gets(X);
    printf("Enter one character : ");
    z = getchar();
    for(int i = 0 ; i<= 9 ; i++)
    {
        if(X[i]=='a' || X[i]=='e' || X[i]=='i' || X[i]=='o' || X[i]=='u'){
            y++;
            X[i] = z;
        }

    }
    for(int i = 0 ; X[i] != '\0' ; i++)
    {
        printf("%c",X[i]);
    }

    printf("\n");
    printf("%d\n",y);

    system("pause");
    return 0;

}
