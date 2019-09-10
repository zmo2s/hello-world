#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 256

void repetition(char chaine[])
{
  int compteur=0;
 int cpt=0;
  for(int i=0; chaine[i] != '\0';i++)
    {
      for(int k=0; chaine[k] != '\0';k++)
        {
          if(chaine[i]==chaine[k] && i!=k && chaine[i]!=' ' && chaine [k] !=' ')
          {
           compteur++;
           chaine[i]='0';
         }
        }

    }
    printf("%d le nombre de répétitions ",compteur);
}

int main()
{
  char chaine[MAX];
  printf("saisir une chaine : ");
  fgets(chaine,MAX,stdin);
  repetition(chaine);

  return 0;
}
