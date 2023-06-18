#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE * fp1,*fp2,*fp3,*fp4,*fp5,*fp6,*fp_avg,*fp_m;
    int roll[6],i,j,a[6],temp1;
    char name[6][10];
    float cgpa[6],c1[6],c2[6],m[6],s[6],so[6],st[6],temp;
    fp1=fopen("CSE101.txt","r");
    {   for(i=0;i<6;i++)
        {
            fscanf(fp1,"%d\t%s\t%f\n",&roll[i],&name[i],&c1[i]);
        }
    }
    fp2=fopen("CSE102.txt","r");
    {   for(i=0;i<6;i++)
        {
            fscanf(fp2,"%d\t%s\t%f\n",&roll[i],&name[i],&c2[i]);
        }
    }
    fp3=fopen("STAT.txt","r");
    {   for(i=0;i<6;i++)
        {
            fscanf(fp3,"%d\t%s\t%f\n",&roll[i],&name[i],&st[i]);
        }
    }

    fp4=fopen("MATH104.txt","r");
    {   for(i=0;i<6;i++)
        {
            fscanf(fp4,"%d\t%s\t%f\n",&roll[i],&name[i],&m[i]);
        }
    }
    fp5=fopen("Sociology.txt","r");
    {   for(i=0;i<6;i++)
        {
            fscanf(fp5,"%d\t%s\t%f\n",&roll[i],&name[i],&so[i]);
        }
    }
    fp6=fopen("SE106.txt","r");
    {   for(i=0;i<6;i++)
        {
            fscanf(fp6,"%d\t%s\t%f\n",&roll[i],&name[i],&s[i]);
        }
    }
    for(i=0;i<6;i++)
    {
        cgpa[i]=(c1[i]+c2[i]+m[i]+s[i]+st[i]+so[i])/6;
    }
    fp_avg=fopen("average.txt","w");
    for(i=0;i<6;i++)
    {
        fprintf(fp_avg,"%d\t%s\t%.2f\n",roll[i],name[i],cgpa[i]);
    }
    for(i=0;i<6;i++)
    {
        printf("%d\t%s\t%.2f\n",roll[i],name[i],cgpa[i]);
    }
     fclose(fp1);
     fclose(fp2);
     fclose(fp3);
     fclose(fp4);
     fclose(fp5);
     fclose(fp6);
     fclose(fp_avg);
     //sorting avg cgpa
     for(i=0;i<6;i++){
        a[i]=i;
     }
     for(i=0;i<5;i++){
        for(j=0;j<5-i;j++){
            if(cgpa[j]<cgpa[j+1]){
                temp=cgpa[j];
                temp1=a[j];
                cgpa[j]=cgpa[j+1];
                a[j]=a[j+1];
                cgpa[j+1]=temp;
                a[j+1]=temp1;
            }
        }
     }
     printf("\n\nAccording to merit position:\n\n");
     for(i=0;i<6;i++){
        printf("%d\t%s\t%.2f\n",roll[a[i]],name[a[i]],cgpa[i]);
     }
     //create new file according to merit
     fp_m=fopen("semester merit.txt","w");
     for(i=0;i<6;i++){
        fprintf(fp_m,"%d\t%s\t%.2f\n",roll[a[i]],name[a[i]],cgpa[i]);
     }
     fclose(fp_m);
     //add meritwise serial into the average.txt file
     fp_avg=fopen("average.txt","a");
     fprintf(fp_avg,"\n\nAccording to merit:\n\n");
     for(i=0;i<6;i++){
        fprintf(fp_m,"%d\t%s\t%.2f\n",roll[a[i]],name[a[i]],cgpa[i]);
     }
     fclose(fp_avg);



}
