#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE * fp1 , * fp2;
    char str[1000];
    fp1=fopen("marks.txt","r");
    if(fp1==NULL){
        printf("not found!!");
    }

    fp2=fopen("copy marks.txt","w");
    if(fp1==NULL){
        printf("not found!!");
    }

    while(!feof(fp1)){
        fgets(str,1000,fp1);
        fprintf(fp2,"%s",str);
    }
    printf("copied successful");
    fclose(fp1);
    fclose(fp2);
}

