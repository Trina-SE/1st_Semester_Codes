#include<stdio.h>
int main(){
   int n,i,t=0;
   printf("Enter the digit\n");
   scanf("%d",&n);
   for(i=1;i<=10;i++){
       t=n+t;
       printf("%d X %d=%d\n",n,i,t);

   }


  return 0;



}
