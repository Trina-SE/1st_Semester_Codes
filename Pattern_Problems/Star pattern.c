#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("How many line you want to print?\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=2*i-1;j++)
        {

            printf("*");

        }
        printf("\n");


    }

}
