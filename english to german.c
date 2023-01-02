#include<stdio.h>
#include<string.h>
int main(){
    int i,v,f=0;
    char e[40],d[2][4][40]={"dog","no","year","child",
                      "hund","nein","jahr","kind"};
    gets(e);
    for(i=0;i<4;i++){
        v=strcmp(d[0][i],e);
        if(v==0){
            f=1;
            break;
        }
    }
    if(f==1)
        printf("%s",d[1][i]);
    else
        printf("word is not in the dictionary");


}
