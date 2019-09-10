#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

 int a=0;
 char character;
   srand (time(NULL));
  while(character != 'q')
   {

        for(int i=0;i <9;i++)
         {

           a=rand()%9;
           printf("la valeur aléatoire :  %d \n",a);
         }
       printf("saisir q pour quitter : \n");
       scanf("%c",&character);
       rewind(stdin);
  }
 return 0;
}
