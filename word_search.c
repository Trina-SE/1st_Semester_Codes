#include<stdio.h>
#include<string.h>
int main(){
    char sen[100],w[50],t[50];
    int i,v,d=0,j=0,f=0;
    printf("enter the string:\n");
    gets(sen);
    printf("enter the word you want to search:\n");
    gets(w);
    for(i=0;i<strlen(sen);i++){
        t[i]=sen[i];
         j++;
        if(sen[i]==' '){
            d=i;
            v=strcmp(t,w);
            if(v==0){
                printf("found at %dth position",j+1);
                f=1;
                break;
            }
            else{
               i=d+1;
               t[i-1]='\0';

            }
        }
    }
    if(f==0)
        printf("not found\n");


}
