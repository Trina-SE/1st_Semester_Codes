#include<stdio.h>
int main(){
    double num1,num2;
    char sum='+',sub='-',mul='*';
    printf("Enter two numbers\n");
    scanf("%lf%lf",&num1,&num2);
    printf("%lf%c%lf=%lf\n",num1,sum,num2,num1+num2);
    printf("%lf%c%lf=%lf\n",num1,sub,num2,num1-num2);
    printf("%lf%c%lf=%lf\n",num1,mul,num2,num1*num2);
    return 0;




}
