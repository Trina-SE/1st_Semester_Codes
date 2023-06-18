#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE * fp;
    fp=fopen("roll.txt","a");
    char s[100];
    int n;
    if(fp==NULL){
        printf("file is not exist!!");
        exit(1);
    }
    else{
        gets(s);
        scanf("%d",&n);
        fprintf(fp," %s%d",s,n);
        }

    fclose(fp);

}
