#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(){

  int select_vetor50k [50000];

  for (int s = 0; s < 50000; s++){
    select_vetor50k [s] = rand() % 10000;
  }


  printf("---ORGANIZAÇAO DA LISTA COM NUMEROS RANDOMICOS 50k itens\n   ");

  clock_t t;
  double comparacoes = 0;
  double trocas = 0;
  int menor_do_menor = select_vetor50k[0];
  t = clock();
  for (int i = 0 ; i<50000 ; i ++){
    int menor = select_vetor50k[i];
    int posmenor = i;
    for (int j = i ; j<50000 ; j ++){
      comparacoes ++;
      if (select_vetor50k[j]<menor){
        menor = select_vetor50k[j];
        posmenor = j;
      }
    }
    int a = select_vetor50k[i];
    select_vetor50k[i] = menor;
    select_vetor50k[posmenor] = a;
    trocas++;
  }
  t = clock() - t;
  for (int o = 0; o < 50000 ; o++){
  printf("%d ",select_vetor50k[o]);
  }
  printf("\n");
  printf("Tempo de execucao: %lf ms\n", ((double)t)/((CLOCKS_PER_SEC/1000)));
  printf("Comparacoes %lf  Trocas %lf  ",comparacoes,trocas);
  return 0;
}
