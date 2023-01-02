#include<stdio.h>
int main(){
   float v,t,s;
   printf("Enter the velocity (m/s) and time (s)\n");
   scanf("%f%f",&v,&t);
   s=2*t*v;
   printf("Crossing distance within (2 X %0.1f)s is=%fm",t,s);
   return 0;


}
