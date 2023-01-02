#include<stdio.h>
int main(){
    int a=10;
    printf("Enter number\n");
    if(a<30)
        printf("%d is less than 30",a);
    else if(a<50)
        printf("%d is less than 50",a);//condition does not check as the first condition is true
    return 0;

}
