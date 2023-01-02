#include<stdio.h>
int main(){
    float cel,fh,tem;
    char ch;
    printf("celcius to farenheight-press f\nfarenheight to celcius-press c\n");
    ch=getchar();
    if(ch=='f'){
        printf("Enter the temperature in celcius:\n");
        scanf("%f",&tem);
        fh=(1.8*tem)+32;
        printf("Temperature in farenheight is %f",fh);

    }
    else if(ch=='c'){
        printf("Enter the temperature in farenheight:\n");
        scanf("%f",&tem);
        cel=5/9*(tem-32);
        printf("Temperature in celcius is %f",cel);
    }
    else
        printf("Error input");



}
