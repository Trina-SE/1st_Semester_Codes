#include<stdio.h>
int main(){
    int num;
    printf("Enter the number that you want to check\n");
    scanf("%d",&num);
    if(num%2==0)
        printf("EVEN");
    else
        printf("ODD");

    return 0;


}
