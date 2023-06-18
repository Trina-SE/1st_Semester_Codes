#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE * fp;
    char w[40],n[40];
    int v=0,f=0;
    fp=fopen("sentence.txt","r");
    printf("enter the word that you want to match:\n");
    gets(w);
    while(!feof(fp)){
        fscanf(fp,"%s",n);
        v=strcmp(w,n);
        if(v==0){
            f=1;
            break;
        }
    }
    if(f==1){
        printf("Found!");
    }
    else
        printf("Not Found!");
}
