#include<stdio.h>
int main()
{
    int a1,a2,b1,b2,i,j,k,sum;
    printf("Enter the order of first matrix:\n");
    scanf("%d%d",&a1,&a2);
    printf("Enter the order of 2nd matrix:\n");
    scanf("%d%d",&b1,&b2);
    int m1[a1][a2],m2[b1][b2],mul[a1][b2];

    if(a2==b1)
    {
        printf("Enter the first matrix element:\n");
        for(i=0; i<a1; i++)
        {
            for(j=0; j<a2; j++)
            {
                scanf("%d",&m1[i][j]);
            }
        }
        printf("The first matrix is\n");
        for(i=0; i<a1; i++)
        {
            for(j=0; j<a2; j++)
            {
                printf("%d\t",m1[i][j]);
            }
            printf("\n");
        }

        printf("Enter the 2nd matrix element:\n");
        for(i=0; i<b1; i++)
        {
            for(j=0; j<b2; j++)
            {
                scanf("%d",&m2[i][j]);
            }
        }
        printf("The 2nd matrix is\n");
        for(i=0; i<b1; i++)
        {
            for(j=0; j<b2; j++)
            {
                printf("%d\t",m2[i][j]);
            }
            printf("\n");
        }

        printf("The multiplication matrix is\n");
        for(i=0; i<a1; i++)
        {
            for(j=0; j<b2; j++)
            {
                sum=0;
                for(k=0; k<a2; k++)
                {
                    sum=sum+m1[i][k]*m2[k][j];

                }
                mul[i][j]=sum;


            }
        }

        for(i=0; i<a1; i++)
        {
            for(j=0; j<b2; j++)
            {
                printf("%d\t",mul[i][j]);
            }
            printf("\n");
        }

    }
    else
        printf("ERROR");


}
