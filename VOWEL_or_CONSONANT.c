#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='A'||ch=='e'||ch=='E'||ch=='I'||ch=='i'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
        printf("VOWEL");
        
    }
    else{
        printf("CONSONANT");
    }
}