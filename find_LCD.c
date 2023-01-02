#include<stdio.h>
int main()
{
    int a,b,x,gcd,lcd;
    printf("Enter numbers\n");
    scanf("%d%d",&a,&b);
    if(a>b)
        x=b;
    else if(b>a)
        x=a;
    for(; x>=1; x--)
    {
        if(a%x==0&&b%x==0)
        {
            gcd=x;
            break;
        }
    }
    lcd=(a*b)/x;//formula:LCD=(multiplication of two numbers)/GCD

    printf("LCD=%d",lcd);
}
