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
    if(l1==l2)
    {
        for(i=0; i<l1; i++)
        {
            a[i]==b[i];
            flag++;
        }}

    if(flag==1)
            printf("same");

    else if (l1>l2)
    printf("a is bigger");
    else if (l2>l1)
       printf("b is bigger");

}
