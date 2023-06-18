#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE * fp, * fp_n;
    int i,j,roll[6],a[6],temp1;
    char name[6][10];
    float cgpa[6],temp;
    fp=fopen("marks.txt","r");
    for(i=0; i<6; i++)
    {
        fscanf(fp,"%d\t%s\t%f\n",&roll[i],&name[i],&cgpa[i]);
    }
    fclose(fp);
    for(i=0; i<6; i++)
    {
        a[i]=i;//index array

    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5-i; j++)
        {
            if(cgpa[j]<cgpa[j+1])
            {
                temp=cgpa[j];//cgpa sorting
                temp1=a[j];//index sorting
                cgpa[j]=cgpa[j+1];
                a[j]=a[j+1];
                cgpa[j+1]=temp;
                a[j+1]=temp1;
            }
        }
    }
    for(i=0; i<6; i++)
    {
        printf("%d\t%s\t%.2f\n",roll[a[i]],name[a[i]],cgpa[i]);
    }
    //entry data to the new file
    fp_n=fopen("merit.txt","w");
    for(i=0; i<6; i++)
    {
        fprintf(fp_n,"Position:%d\t%d\t%s\t%.2f\n",i+1,roll[a[i]],name[a[i]],cgpa[i]);
    }
    fclose(fp_n);



}
