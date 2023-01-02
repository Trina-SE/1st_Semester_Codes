//function with argument and return type
#include<stdio.h>
float sum (float,float);
void main(){
    float x,y,s=0;
    printf("enter 2 numbers\n");
    scanf("%f%f",&x,&y);
    s=sum(x,y);
    printf("%.2f",s);

}
float sum (float a,float b){
   return a+b;

}
