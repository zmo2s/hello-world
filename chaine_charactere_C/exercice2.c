#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// se souvenir que ' ' pour charactère et " " pour les chaines

void compare(char chaine1[],char chaine2[]);

int main()
{
 char input='a';
 char chaine1[100];
 char chaine2[100];
 fgets(chaine1,100,stdin);
 fgets(chaine2,100,stdin);

    do{
      compare(chaine1,chaine2);
      printf("Pressez la touche Q pour Quitter et E pour continuer :");
      scanf("%c",&input);

      }
   while(input != 'Q');

  return 0;
}


void compare(char chaine1[],char chaine2[])
{
   int taille=strlen(chaine1);

    for(int i=0;i<taille;i++)
       {
         if(chaine1[i]==chaine2[i])
          {
            putchar(chaine1[i]);
          }
       }
}
