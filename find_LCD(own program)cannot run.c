#include<stdio.h>
int main()
{
    int num1,num2,i=1,s,t;
    printf("Enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    while(s!=t)
    {
        s=num1*i;
        t=num2*i;
        i++;
    }

    printf("LCD=%d",s);
    return 0;

}
