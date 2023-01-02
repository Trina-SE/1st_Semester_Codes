#include<stdio.h>
int main(){
    float u,a,t,s1,s2;
    printf("Enter the value of u(m/s),a(m/s^2),t(in second)\n");
    scanf("%f%f%f",&u,&a,&t);
    s1=(u*t)+(0.5*a*t*t);
    printf("After %0.1fs time crossing distance:%0.2f\n",t,s1);
    s2=(u*2*t)+(0.5*a*4*t*t);
    printf("After (2 X %0.1f)s time crossing distance:%0.2f\n",t,s2);
    return 0;


}
