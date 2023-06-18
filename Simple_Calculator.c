#include<stdio.h>
void add(float,float);
void sub(float,float);
void mul(float,float);
void div(float,float);

void main()
{
    printf("if you want to add two numbers press +\nif you want to sub two numbers press -\nif you want to mul two numbers press *\nif you want to div two numbers press /\n");
    printf("Enter two numbers:\n");
    float a,b;
    char ch;
    do
    {
        scanf("%f %f %c", &a, &b, &ch);
        switch(ch)
        {
        case '+':
            add(a,b);
            break;
        case '-':
            sub(a,b);
            break;
        case '*':
            mul(a,b);
            break;
        case '/':
            div(a,b);
            break;

        }
    }
    while(ch!='Q');

}
void add(float a,float b)
{
    printf("%f\n", a+b);
}
void sub(float a,float b)
{
    printf("%f\n", a-b);
}
void mul(float a,float b)
{
    printf("%f\n", a*b);
}
void div(float a,float b)
{
    if(b==0)printf("Error");
    else printf("%f\n", a/b);
}


