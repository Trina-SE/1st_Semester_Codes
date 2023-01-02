#include<stdio.h>
int main(){
    char c;
    printf("Enter a character in lower case formate that you want to check\n");
    c=getchar();
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        printf("VOWEL");
    else
        printf("CONSONANT");


    return 0;

    }
