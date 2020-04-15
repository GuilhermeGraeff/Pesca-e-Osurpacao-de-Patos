
#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(){

  int select_vetor100k [100000];

  for (int s = 0; s < 100000; s++){
    select_vetor100k [s] = s+1;
  }


  printf("---ORGANIZAÇAO DA LISTA COM NUMEROS de ordem crescente 100k itens\n   ");

  clock_t t;
  double comparacoes = 0;
  double trocas = 0;
  int menor_do_menor = select_vetor100k[0];
  t = clock();
  for (int i = 0 ; i<100000 ; i ++){
    int menor = select_vetor100k[i];
    int posmenor = i;
    for (int j = i ; j<100000 ; j ++){
      comparacoes ++;
      if (select_vetor100k[j]<menor){
        menor = select_vetor100k[j];
        posmenor = j;
      }
    }
    int a = select_vetor100k[i];
    select_vetor100k[i] = menor;
    select_vetor100k[posmenor] = a;
    trocas++;
  }
  t = clock() - t;
  for (int o = 0; o < 100000 ; o++){
    printf("%d ",select_vetor100k[o]);
  }
  printf("\n");

  printf("Tempo de execucao: %lf ms\n", ((double)t)/((CLOCKS_PER_SEC/1000)));
  printf("Comparacoes %lf  Trocas %lf  ",comparacoes,trocas);

  return 0;
}
