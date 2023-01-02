#include<stdio.h>
int main()
{
    int num1,num2,i,rem;
    printf("Enter two numbers:\n");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        for(i=1; num2!=0; i++)
        {
            rem=num1/num2;
            num1=num2;
            num2=rem;

        }
        printf("GCD=%d",num1);
    }
    else
    {
        for(i=1; num1!=0; i++)
        {
            rem=num2/num1;
            num2=num1;
            num1=rem;
        }
        printf("GCD=%d",num2);
    }
}



