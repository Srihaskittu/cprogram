#include<stdio.h>
void main()
{
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': 
        printf("it is a vowel!");
        break;
        default:
        printf("it is not a vowel!");
    }
}
