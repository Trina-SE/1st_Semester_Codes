#include<stdio.h>
void main()
{
    int n,i,j,k;
    printf("How many line you want to print?\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(k=n-1; k>=i; k--)
        {
            printf(" ");

        }
        for(j=1; j<=i; j++)
        {
            printf("%d",j);

        }


        printf("\n");



    }


}


