#include<stdio.h>
void main()
{
    int n,i,j,s;
    printf("How many line you want to print?\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(s=n-1; s>=i;s--)
        {

            printf(" ");


        }
        for(j=1; j<=i; j++)
        {
            printf("* ");

        }


        printf("\n");



    }


}


