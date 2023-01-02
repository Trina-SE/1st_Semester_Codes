#include<stdio.h>
int main(){
    int a=10;
    printf("Enter number\n");
    if(a<30)
        printf("%d is less than 30\n",a);
    if(a<50)
        printf("%d is less than 50\n",a);//condition is also check though the first condition is true
    return 0;

}
