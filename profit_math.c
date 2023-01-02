#include<stdio.h>
int main()
{
   float i,p,r;
   int n;
   printf("Enter p,r,n:\n");
   scanf("%f%f%d",&p,&r,&n);
   i=p*(r/100)*n;
   p=p+i;
   printf("Profit after %d year later is:%0.3f\n",n,i);
   printf("Total amount after %d year later is:%0.3f",n,p);
   return 0;
}
