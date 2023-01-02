#include<stdio.h>
int main()
{
    int n,i=1,t;
    printf("Enter the digit\n");
    scanf("%d",&n);
    while(i<=10)
    {
        t=n*i;
        printf("%d*%d=%d\n",n,i,t);
        i++;
    }




    return 0;



}

