#include<stdio.h>
int main(){
    int r,c,i,j,sum_row,sum_col;
    printf("Enter the order where row=column\n");
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
            sum_row=0,sum_col=0;
            for(j=0;j<c;j++){
                sum_row=sum_row+m1[i][j];
                sum_col=sum_col+m1[j][i];
            }
            printf("the sum of row is=%d\t",sum_row);
            printf("the sum of column is=%d\n",sum_col);
              //this is for square matrix

}
}
