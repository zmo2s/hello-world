#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//(GNU General Public License)
//GCC signifiait à l'origine GNU C Compiler, soit le « compilateur C de GNU ». Comme GCC est très extensible, le support de nombreux autres langages a été ajouté et le nom officiel a été changé en GNU Compiler Collection.
//GCC = General public license (Not Unix)  C compiler
// g++ = gcc++   soit  General public license (Not Unix)  C++ compiler
void affiche(char chaine[]);
void affiche2(char chaine[]);

int main()
{
  char chaine[100];
  fgets(chaine,100,stdin);
  printf("La chaine : %s",chaine);
  affiche(chaine);
  putchar('\n');
  affiche2(chaine);

    return 0;
}


void affiche(char chaine[])
{
  int taille;
  taille=strlen(chaine);
  for(int i=0;i < taille-1 ; i++)
        {
      if(i % 2 ==0)
            {
              putchar(chaine[i]);
            }
        }
}


void affiche2(char chaine[])
{
  int taille;
  taille=strlen(chaine);
  for(int i=0;i < taille-1 ; i+=2)
        putchar(chaine[i]);
}
