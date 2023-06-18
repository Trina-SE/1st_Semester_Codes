#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE * fp ;
    char c;
    int i=0,count=1;
    fp=fopen("marks.txt","r");
    while(!feof(fp))
    {
        c=fgetc(fp);
        if(c=='\n')
        {
            count++;
        }

    }
    fclose(fp);
    printf("%d",count);

}
