#include<stdio.h>
int main(){
    float *p , *q , a , b ;
    p=&a;
    q=&b;
    scanf("%f%f",&a,&b);
    printf("%f\n",*p++);
    printf("%f\n",++*q);





}
