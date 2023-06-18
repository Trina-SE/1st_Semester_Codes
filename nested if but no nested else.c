void main()
{
    int age,salary;
    printf("Enter age & salary:\n");
    scanf("%d%d",&age,&salary);
    if(age>40)
    {
        /* if we do not use curly braces in "inner if"then else is used as inner else.
           and then if salary>40000,control will go to the "inner else" and
               so,when we input 45 & 70000 then it will print ultimate salary is=73000*/

        if(salary<40000)
            salary=salary+10000;

        /*if salary>40000 then what happened is not mentioned.
        so,when we input 45 & 70000 then "outer if"is true but "inner if" is false
        so,control will go to the main program statement.it will not execute "outer
        else" also as the "outer if" was true.so it will just execute the last line
            of the main program that is ultimate salary is=70000*/


    }


    else//as I give curly braces to "inner if" so,this else is "outer else".

        salary=salary+3000;

    printf("Ultimate salary is=%d",salary);/*This line is not the part of else.without curly
    braces only one line is considered as else statement.this line is a part of main function not
    if-else part*/


}
