
#include<stdio.h>
void main()
{
    int n,i,j,number=n;
    printf("How many line you want?\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {      number=n;
        for(j=n; j>=i; j--)
        {
            printf("%d",number);
            number=number-1;

        }
        printf("\n");


}}

