#include<stdio.h>
int main(){
  int a[]={3,11,-1,60,0,-8},*p,*q,d;
  p=a;
  q=&a[3];
    d=q-p;
  printf("%d\n",*p);
  printf("%d\n",*q);
  printf("%d\n",d);
  printf("%d\n",*p+2);



}
