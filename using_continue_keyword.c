#include<stdio.h>
int main()
{
    int n=0;
    while(n<10)
    {
        n++;
        if(n%2==0)
        {
            continue;
        } /*when n%2!=0,then it will out of the 'if'bracket not out of the loop
                       and print odd number which is not divided by 2..when
                     n%2==0,then 'if' will execute means 'loop continue' go to the
                       increment part of loop,doesn't read printf(and so not
                       printing even number which is divided by 2..*/


        printf("%d\n",n);
    }



}




