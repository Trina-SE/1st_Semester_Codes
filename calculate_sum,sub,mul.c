#include<stdio.h>
int main(){
    int num1,num2,value;
    char c;
    scanf("%d%d",&num1,&num2);
    c='+';
    value=num1+num2;
    printf("%d%c%d=%d\n",num1,c,num2,value);
    c='-';
    value=num1-num2;
    printf("%d%c%d=%d\n",num1,c,num2,value);
    c='*';
    value=num1*num2;
    printf("%d%c%d=%d\n",num1,c,num2,value);

  return 0;


}
