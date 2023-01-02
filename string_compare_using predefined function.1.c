#include<stdio.h>
#include<string.h>
int main()
{
    int l1,l2,i,flag=0;
    char a[40],b[50];
    gets(a);
    gets(b);
    l1=strlen(a);
    l2=strlen(b);

    for(i=0; i<l1; i++)
    {
        if(a[i]!=b[i])
        {   flag=1;
            break;

        }

    }

    if(l1==l2&&flag==0)
        printf("strings are same");
    else if(l1==l2&&flag==1)
        printf("strings are not same");
    else if(l1>l2)
        printf("a is bigger than b");
   else if(l1<l2)
        printf("b is bigger than a");

}

