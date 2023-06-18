# include<stdio.h>
float func1();//prototype declaration is must in this case.
float func2();
int main()
{
    func2();
    printf("3");
    return 0;
}
float func2()/*if u do not declare function then
 it will give u error as return type is float*/
{
    func1();
    printf("2");

}
float func1()
{
    printf("1");
}
