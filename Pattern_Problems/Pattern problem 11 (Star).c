#include<stdio.h>
void main()
{
    int n,i,j,s;
    printf("Enter the number of lines\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(s=n-1; s>=i; s--)
        {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");

    }
    for(i=n-1; i>=1; i--)
    {
        for(s=1; s<=n-i; s++)
        {
            printf(" ");
        }
        for(j=1; j<=1; j++)
        {
            printf("*");
        }
        printf("\n");

    }





}
