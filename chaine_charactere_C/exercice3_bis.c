#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void saisie(char i[],char s[]);
void repeat(char s[256], int l[26]);
void result(int l[26]);

int main()
{
char continuer='o';
char s[256];
int l[26];

    while(continuer=='o'){

        saisie("entrer une phrase : ",s);
        repeat(s,l);
        result(l);

        printf("continuer ?(o/n)");
        scanf("%c",&continuer);
        rewind(stdin);

    }
    return 0;
}
//
void saisie(char i[],char s[256])
{
    printf("%s",i);
    fgets(s,256,stdin);
    s[strlen(s)-1]='\0';// suppression \n final
}
//
void repeat(char s[256], int l[26])
{
int i,c;
    memset(l,0,sizeof(int)*26);
    for(i=0; s[i]!='\0'; i++){
        // ne prend que les lettres (min et maj)
        if(s[i]>='a' && s[i]<='z'){

            c=s[i]-'a';
printf("la valeur de C %d",c);
}
        else if(s[i]>='A' && s[i]<='Z')
            c=s[i]-'A';
        else
            continue;

        l[c]++;
    }
}
//
void result(int l[26])
{
int i;
    printf("comptage lettres : \n");
    for (i=0; i<26; i++){
        if(l[i]!=0)
            printf("%c : %d\n",i+'a',l[i]);
    }

}
