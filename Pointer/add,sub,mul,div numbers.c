#include<stdio.h>
int main(){
    int *p , *q , a , b;
    scanf("%d%d",&a,&b);
     p=&a;
     q=&b;
    printf("%d\n",(*p)+(*q));
    printf("%d\n",(*p)-(*q));
    printf("%d\n",(*p)*(*q));
    if((*q)!=0)
        printf("%.2f\n",(float)(*p)/(*q));
    else
        printf("Error!!");







}
