#include<stdio.h>
int main()
{/*To print & scan(take input) a array,,we have to use 2 loops,one for scan and
    another for printing..you can't print and scan both value at one loop*/
    int m1[2][3],m2[2][3],m3[2][3],i,j;
    printf("Enter the first matrix 2X3:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&m1[i][j]);


        }
    }
    printf("The first matrix is:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",m1[i][j]);


        }
        printf("\n");
    }
    printf("Enter the 2nd matrix 2X3:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&m2[i][j]);


        }
    }
    printf("The 2nd matrix is:\n");
   for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",m2[i][j]);


        }
        printf("\n");
    }
    printf("\nThe sum matrix is:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            m3[i][j]=m1[i][j]+m2[i][j];
            printf("%d\t",m3[i][j]);
        }
        printf("\n");
    }


}
