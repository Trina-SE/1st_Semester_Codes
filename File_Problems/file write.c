#include<stdio.h>
#include<stdlib.h>
int main(){
     FILE * fp;
     char s[100];
     fp=fopen("roll.txt","w");
     if(fp==NULL){
        printf("file cann't found!!");
        exit(1);
     }
     else{
        printf("enter the roll\n");
        gets(s);
        fprintf(fp,"%s",s);
     }
     fclose(fp);

}
