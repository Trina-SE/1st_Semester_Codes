#include<stdio.h>
#include<string.h>
int main()
{
    int l,i,word=0,vowel=0,conso=0,others=0;
    char w[1000];
    gets(w);
    l=strlen(w);
    for(i=0; i<l; i++)
    {
        if((w[i]>='a'&&w[i]<='z')||(w[i]>='A'&&w[i]<='Z'))
        {
            word++;
            if(w[i]=='a'||w[i]=='e'||w[i]=='i'||w[i]=='o'||w[i]=='u'||
                    w[i]=='A'||w[i]=='E'||w[i]=='I'||w[i]=='O'||w[i]=='U')
                vowel++;
            else
                conso++;


        }
        else
            others++;
        if(w[i]==' ')
        {
            word++;
            others--;
        }

    }
    printf("total word=%d\n",word);
    printf("total vowel=%d\n",vowel);
    printf("total consonant=%d\n",conso);
    printf("others character=%d\n",others);






}
