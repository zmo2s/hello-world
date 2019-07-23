// gcc  first.c -o first -lpthread


#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

 void *thread_1(void *arg)
  {
  printf("Nous sommes dans le thread. \n");
  // arret propre du thread
  pthread_exit(EXIT_SUCCESS);
   }
int main(void)
 {
   //creation de la variable du thread
   pthread_t thread1;
   printf("avant la création du thread.\n");
   //Creation du noeud
   pthread_create(&thread1, NULL, thread_1,NULL);
   pthread_join(thread1,NULL);
   printf("apres axecution du thread.\n");
   return EXIT_SUCCESS;
 }
