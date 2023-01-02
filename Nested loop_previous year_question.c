#include<stdio.h>
int main(){
    int x,y,z,N;
    printf("Enter the number\n");
    scanf("%d",&N);
    for(x=1;x<=N;x++){
        for(y=1;y<=N;y++){
                z=x+y;
                if(x<=N&&y<=N&&z<=N){
                 printf("(%d,%d,%d)\n",x,y,z);

                 }

        }
    }

 return 0;

}
