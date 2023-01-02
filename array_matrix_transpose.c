#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter the order\n");
    scanf("%d%d",&r,&c);
    int m1[r][c];
    printf("Enter the matrix element\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("The matrix is\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t",m1[i][j]);
        }
        printf("\n");
    }
    printf("\nThe transpose matrix is\n");
    for(i=0; i<c; i++)
    {
        for(j=0; j<r; j++)
        {
            printf("%d\t",m1[j][i]);
        }
        printf("\n");
    }



}
