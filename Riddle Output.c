#include<string.h>
#include<stdio.h>
void main()
{
    char s1[40]="Hello Tri Na!!";
    char s2[40]="How are you?";
    char s3[80];
    int v;
    v=strcmp(s1,s2);
    switch(v)
    {
    case 0:
        printf("The Strings Are Equal\n");
        break;
    default:
        printf("The Strings Are Not Equal\n");
    }
    printf("This is what I am trying to say :\n %s\n",strcat(s1,s2));
    printf("Number of characters in 1st & 2nd sentence respectively = %d & %d\n Thats why they aren't equal\n",strlen(s1),strlen(s2));
    printf("Well...You didn't answer me bro!! %s\n",strcpy(s3,s2));
    return 0;
}
