#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("How many line you want to print?\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        loop();
        for(k=1; k<=2*i-1; k++)
        {

            printf("*");
        }
        loop();

    }
    printf("\n");



}
void loop()
{
    int i,j,n;
    for(j=n; j>=i; j--)
    {

        printf("a");
    }

}
