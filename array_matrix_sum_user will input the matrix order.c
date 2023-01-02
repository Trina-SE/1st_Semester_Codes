#include<stdio.h>
int main()
{
    int a_row,a_col,b_row,b_col,i,j;
    printf("Enter the order of first matrix\n");
    scanf("%d%d",&a_row,&a_col);
    printf("Enter the order of 2nd matrix\n");
    scanf("%d%d",&b_row,&b_col);

    int m1[a_row][a_col],m2[b_row][b_col],sum[a_row][a_col];

    if(a_row==b_row&&a_col==b_col)
{



        printf("Enter the element of first matrix %dX%d\n",a_row,a_col);
        for(i=0; i<a_row; i++)
        {
            for(j=0; j<a_col; j++)
            {
                scanf("%d",&m1[i][j]);
            }
        }
        printf("The first matrix is\n");

        for(i=0; i<a_row; i++)
        {
            for(j=0; j<a_col; j++)
            {
                printf("%d\t",m1[i][j]);
            }
            printf("\n");
        }
        printf("Enter the element of 2nd matrix %dX%d\n",b_row,b_col);
        for(i=0; i<b_row; i++)
        {
            for(j=0; j<b_col; j++)
            {
                scanf("%d",&m1[i][j]);
            }
        }
        printf("The 2nd matrix is\n");


    for(i=0; i<b_row; i++)
    {
        for(j=0; j<b_col; j++)
        {
            printf("\n%d\t",m2[i][j]);
        }
        printf("\n");
    }
    printf("The sum matrix %dX%d\n",b_row,b_col);
    for(i=0; i<a_row; i++)
    {
        for(j=0; j<a_col; j++)
        {
            sum[i][j]=m1[i][j]+m2[i][j];
            printf("\n%d\t",sum[i][j]);
        }
        printf("\n");


    }


}

else
    printf("Error!!");
}
