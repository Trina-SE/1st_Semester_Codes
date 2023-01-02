#include<stdio.h>
int main()
{
    int n=0;
    while(n<100)/*Although n<100,but it will print 1 to 20 as n=21,
                  'if' condition true then 'break' execute,then out
                   of the loop*/
    {
        n++;
        if(n>20)
            break;
        printf("%d\n",n);


    }

  return 0;


}
