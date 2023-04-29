// Caesar's code is one of the simplest and most well-known encryption techniques.
// It is a type of substitution in which each letter of the text is replaced by another, which has n positions after it in the alphabet.
//For example, with an exchange of three positions, the letter A would be replaced by D, B would become E, and so on.
// Write a program that makes use of this Caesar code for three positions.
// Between with a string and print the encoded string.
// Example:
// String: the slight brown fox jumped on the tired dog
// New string: d oljhlud udsrvd pduurp vdowrx vreuh r fdfkruur fdqvdgr

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char name[100];
    printf("String : ");
    gets(name);
    printf("New String : ");
    for(int i = 0 ; i <= 99 ; i++)
    {
        if(name[i]>64 && name[i]<91) printf("%c",name[i]+3);
        else if(name[i]>96 && name[i]<123) printf("%c",name[i]+3);
        else if(name[i] == '\0') break;
        else printf("%c",name[i]);
    }
    printf("\n");
    system("pause");
    return 0;

}
