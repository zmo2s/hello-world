#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void printTab(char a[])

{
   for(int i=0;i < strlen(a);i++)
   {
     printf("%c",a[i]);
   }
}



int main()
{
  char a[100]="levelo1";
  char b[]="levelo2";


  for(int i=0;i<3;i++)
  strcat(a,b);
  printTab(a);



  char c[200];
  char d[100];
  fgets(c, 200, stdin);
  fgets(d, 100, stdin);

  for(int i=0 ; i<10 ;i++)
  strcat(c,d);
  printTab(c);

  char e[10];
  char f[10];
  fgets(e, 10, stdin);
  fgets(f, 10, stdin);

  e[strlen(e)-1]='\0';


  for(int i=0 ; i<1 ;i++)
  strcat(e,f);
  printTab(e);

  char g[100]="lgeof";
  char h[100]="keof";

  strcpy(g,h);
  printTab(g);

  char k[100];
  char j[100];
  fgets(k, 100, stdin);
  fgets(j, 100, stdin);
  strcpy(k,j);
  printTab(k);

  char l[200]="me";
  char m[100]="re";

  strcpy(l,m);
  printTab(l);

  char w[100]="ab";
  char x[100]="ab";

  int cpt= strcmp(w,x);
  printf("%d",cpt);

  char v[100];
  char c[100];
  fgets(c, 100, stdin);
  fgets(v, 100, stdin);
  cpt=strcmp(c,v);
  printf("%d",cpt);


  char b[100];
  char n[200];//taille talbeau pas importante pour strcmp uniquement la taille des 2 chaines présentes dedans doivent être de meme taille
  fgets(b, 100, stdin);
  fgets(n, 100, stdin);
  cpt=strcmp(b,n);
  printf("%d",cpt);



  return 0;

}
