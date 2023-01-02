#include<stdio.h>
int main(){
   int a,i,sum=0,x;
   scanf("%d",&a);
   x=a*(a+1)/2;
   int e[a];
   for(i=0;i<a-1;i++){
     scanf("%d",&e[i]);

   }
   for(i=0;i<a-1;i++){
        sum=sum+e[i];

   }
   printf("%d",x-sum);












   }









