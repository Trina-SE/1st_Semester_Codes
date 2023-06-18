#include<stdio.h>
#include<stdlib.h>
int main(){
   FILE * fp;
   char str[100];
   fp=fopen("roll.txt","r");
    if(fp==NULL){
        printf("file cann't found!!");
        exit(1);
     }
     else{
   while(!feof(fp)){
     fgets(str,100,fp);
   // fscanf(fp,"%s %s",&str,&str);
      printf("%s",str);
    //printf("%s %s",str,str);
   }
     }
   fclose(fp);
}
