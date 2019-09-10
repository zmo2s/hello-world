#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 256

char fgets1(char a[],int max)
{
  char c,i=0;
  memset(s,0,max);
  while ((c=getchar()) != '\n' && i < max-1)
  {       s[i++]=c;   }
         rewind(stdin);
  
}

int strlen1(char a[])
{
  for(int i=0 ; s[i] != '\n';i++)
;
return i;
}
void strcpy (char *t1,char *t2)
{

 for(int i=0; t2[i] != '\0'; i++)
 {
   t1[i]=t2[i]; 
 }
t1[i]='\0';
}


void strcat (char *t1,char *t2)
{

int taille =strlen(t1)+strlen(t2);
memset(t1,taille,0);
for(int i=strlen(t1); i < strlen(t2) ;i++)
{
  t1[i]=t2[i];
}

t1[i]='\0';
}

void p_strcat(char s1[], char s2[])
{
int i,j;
    //trouver le dernier \0
    for (i=0; s1[i]!='\0';i++)
        ;
    // copier à la suite
    for( j=0 ; s2[j]!='\0'; j++,i++)
        s1[i]=s2[j];
    s1[i]='\0';
}



int p_strcmp(char s1[], char s2[])
{
int i,res=0;
char c1,c2;
    for (i=0; s1[i]!='\0' && s2[i]!='\0'; i++){
        // convertir en minuscule
        c1=s1[i];
        c2=s2[i];

// Il est facile, de convertir des lettres majuscules dans des minuscules:
//if (C>='A' && C<='Z') C = C-'A'+'a';
//ou vice-versa:
//if (C>='a' && C<='z') C = C-'a'+'A';
//ou  (isalpha, islower, toupper, ...) de la bibliothèque <ctype>
//ex : A = 66 a = 97 donc A+'a'-A=65+97-65=97=a ou encore B+'b'-B=66+98-66=98



        if(c1>='A' && c1<='Z')
            c1+='a'-'A';
        if(c2>='A' && c2<='Z')
            c2+='a'-'A';
        res=c1-c2;
        if(res!=0)
            break;
    }
    // pas de différence mais une chaine plus longue que l'autre
    if (res==0 && s1[i]!=s2[i]){
        if(s1[i]!='\0')
            res=1;
        else
            res=-1;
    }
    return res;


}


// le max -1 c'est dnas le cas ou le tampon aurai des donné en plus qui n'aurai pas été effacé precedament avec rewind , en gros des donné qui serai rester
int main()
{
  char tab[MAX];
  char tab1[MAX];
  int taille;
  fgets(tab,MAX,stdin);

  taille=strlen(tab)-1;
  printf("tailel du tableau %d", taille);
  memset(tab,1,20);
  memset(tab1,2,30);
  strcat(tab,tab1);
  putchar('\n');
  printf("les valeurs du tableaus \n");
  for(int i=0;i<strlen(tab);i++)
   {
     printf("%d ",tab[i]);
   }





  return 0;


}
