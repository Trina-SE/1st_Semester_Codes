#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter n:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {

        if(i%2==0)
        {
            continue;
        }



        sum=sum+i;
    }





    printf("The sum of odd number is=%d",sum);

    return 0;

}

