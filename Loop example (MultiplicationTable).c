#include<stdio.h>
void main()
{
    int i,num,result;
    printf("Enter a number:\n");
    scanf("%d",&num);
      for(i=1; i<=10; i++)
            {
                result=num*i;
                printf("%dx%d=%d\n",num,i,result);

            }

}
