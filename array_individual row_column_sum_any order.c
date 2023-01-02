#include<stdio.h>
int main(){
    int r,c,i,j,sum_row,sum_col;
    printf("Enter the order:\n");
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
    for(i=0;i<r;i++){
            sum_row=0;
        for(j=0;j<c;j++){
            sum_row=sum_row+m1[i][j];

        }
    printf("The sum of row-%d is=%d\n",i+1,sum_row);
    }
    for(j=0;j<c;j++){
            sum_col=0;
        for(i=0;i<r;i++){
            sum_col=sum_col+m1[i][j];

        }
    printf("The sum of column-%d is=%d\n",j+1,sum_col);
    }
}

