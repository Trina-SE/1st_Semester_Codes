#include<stdio.h>
int main()
{
    float i=0,p,r;
    int n,j;
    printf("Enter p,r,n:\n");
    scanf("%f%f%d",&p,&r,&n);
    for(j=1; j<=n; j++)
    {
        i=p*(r/100)+i;
        printf("Profit after %d year later profit is:%0.2f\n",j,i);
    }
        p=p+i;
        printf("Total amount after %d year later is:%0.2f",n,p);
        return 0;
    }

