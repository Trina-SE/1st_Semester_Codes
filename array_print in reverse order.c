#include<stdio.h>
int main()
{
    int a,i;
    printf("How many elements are in array:\n");
    scanf("%d",&a);
    int m[a];
    printf("Enter the array element\n");
    for(i=0; i<a; i++)
    {

        scanf("%d",&m[i]);
    }
    printf("The array is:\n");

for(i=0; i<a; i++)
{

    printf("%d\t",m[i]);
}
printf("\nThe reverse array is:\n");


   for(i=a-1;i>=0;i--){
        printf("%d\t",m[i]);

}


}
