#include<stdio.h>
int main()
{
    double a1,a2,b1,b2,c1,c2,x,y,d;
    printf("Enter the co-efficient of x,y and constant for the first equation:\n");
    scanf("%lf%lf%lf",&a1,&b1,&c1);
    printf("Enter the co-efficient of x,y and constant for the 2nd equation:\n");
    scanf("%lf%lf%lf",&a2,&b2,&c2);
    d=a1*b2-a2*b1;
    if((int)d==0)/*To write (int),we cast the double value into a integer number.
                    This is called-type casting.Then compare to d and 0*/
        printf("This equation can't be solved !!\n");
    else
    {
        x=(b2*c1-b1*c2)/(a1*b2-a2*b1);
        y=(a1*c2-a2*c1)/(a1*b2-a2*b1);
        printf("x=%0.2lf\ny=%0.2lf\n",x,y);
    }
    return 0;

}
