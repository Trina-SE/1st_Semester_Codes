#include<stdio.h>
void main()
{
    int age,salary;
    printf("Enter age & salary:\n");
    scanf("%d%d",&age,&salary);
    if(age>40){/*This part is nested if-else*/

        if(salary<40000)
            salary=salary+10000;

        else
            salary=salary+5000;}//Nested closed


    else
        salary=salary+3000;
    printf("Ultimate salary is=%d",salary);



}
