#include<stdio.h>
void main()
{
    float p,r,n,a,x,y;
    printf("Enter p,r,n\n");
    scanf("%f%f%f",&p,&r,&n);
    r=r*0.01;
    x=(1+r);
    y=pow(x,n);
    a=p*y;
    printf("Total amount=%f",a);





}


