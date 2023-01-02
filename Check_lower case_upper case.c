#include<stdio.h>
int main(){
    char c;
    printf("Enter the character\n");
    c=getchar();
    if(c>='a'&&c<='z')
        printf("Lower case");
    else if(c>='A'&&c<='Z')
        printf("Upper case");
    else
        printf("Wrong input\n");
    return 0;

}
