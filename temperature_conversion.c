#include<stdio.h>
int main(){
    float cel,fh,tem;
    int x;
    printf("celcius to farenheight-press 1\nfarenheight to celcius-press 2\n");
    scanf("%d",&x);
    if(x==1){
        printf("Enter the temperature in celcius:\n");
        scanf("%f",&tem);
        fh=(1.8*tem)+32;
        printf("Temperature in farenheight is %f",fh);

    }
    else if(x==2){
        printf("Enter the temperature in farenheight:\n");
        scanf("%f",&tem);
        cel=5/9*(tem-32);
        printf("Temperature in celcius is %f",cel);
    }
    else
        printf("Error input");



}
