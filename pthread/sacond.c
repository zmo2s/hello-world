#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *thread_1(void *arg)
{
  int *i= (int *) arg;
  (*i)++;
  pthread_exit(NULL);
}

int main(void)
{
  /*création de la variable qui contien le thread1*/
  int i=1;
  pthread_t thread1;
  printf("avant la creation du thread ,i = %i.\n",i);
  /*creation du noeud*/
  pthread_create(&thread1,NULL,thread_1,&i);
  pthread_join(thread1,NULL);
  printf("après la création du thread ,i = %i \n",i);
  return EXIT_SUCCESS;
}
