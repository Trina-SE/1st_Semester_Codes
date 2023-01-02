#include<stdio.h>
int main()
{
    int a,b,x,gcd;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    if(a>b)
        x=b;
    else
        x=a;
    for(;x>=1;x--){
        if(a%x==0&&b%x==0){
            gcd=x;
            break;
        }
    }
    printf("GCD=%d",x);
}
