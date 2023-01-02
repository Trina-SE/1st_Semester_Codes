#include<stdio.h>
#include<string.h>
int main(){
    char a[60],b[30];
    int i,l1,l2;
    gets(a);
    gets(b);
    l1=strlen(a);//strlen predefined function_for knowing the length of string
    l2=strlen(b);
    for(i=0;i<l2;i++){
        a[l1+i]=b[i];
    }
    puts(a);


}
