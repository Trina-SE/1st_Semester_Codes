#include<stdio.h>
#include<string.h>
int main(){
    int value;
    char a[40],b[50];
    gets(a);
    gets(b);
   value=strcmp(a,b);
   if(value==0)
    printf("same");
   else
    printf("not same");






}

