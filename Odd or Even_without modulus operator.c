#include<stdio.h>
int main(){
    int num,r,t;
    printf("Enter the number that you want to check\n");
    scanf("%d",&num);
    t=num/2;
    r=num-(t*2);
    if(r==0)
        printf("EVEN");
    else
        printf("ODD");
    return 0;


}
