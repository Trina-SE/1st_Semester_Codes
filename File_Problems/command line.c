#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
    int c=0;
    char b[100];
    //jei file theke khujte hbe oitar nam argv[1] e nibi
    //jei word ta khujte hobe seta argv[2] te nibi

    FILE *fp;
    fp=fopen(argv[1],"r");

    while(!feof(fp))
    {
        fscanf(fp,"%s",b);
        if(!strcmp(argv[2],b))
        {
            c++;
        }
    }
    fclose(fp);
    if(c==0) printf("Pai nai");
    else printf("Sabash khuje paisi");
}
