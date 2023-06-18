#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE * fp;
    fp=fopen("roll.txt","r");
    char str[1000];
    while(!feof(fp)){
        fgets(str,1000,fp);
        printf("%s",str);
    }
    fclose(fp);
}
