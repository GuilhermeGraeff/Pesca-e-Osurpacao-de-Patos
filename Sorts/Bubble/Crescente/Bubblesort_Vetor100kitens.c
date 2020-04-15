#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(){

  int bubble_vetor100k_crescente [100000];

  for (int s = 0; s < 100000; s++){
    bubble_vetor100k_crescente [s] = s+1;
  }

  printf("---ORGANIZAÇAO DA LISTA COM NUMEROS RANDOMICOS 100k itens\n   ");

  clock_t t;
  double comparacoes = 0;
  double trocas = 0;
  t = clock();
  for (int i = 100000; i >= 1; i--){
      int flag = 0;

      for(int j = 1; j < i; j ++){
        comparacoes ++;
        if (bubble_vetor100k_crescente[j-1]>bubble_vetor100k_crescente[j]){
          trocas ++;
          int a = bubble_vetor100k_crescente[j];
          bubble_vetor100k_crescente[j] = bubble_vetor100k_crescente [j-1];
          bubble_vetor100k_crescente[j-1] = a;
          flag = 1;
        }
      }
      if (flag == 0){
          break;
      }
  }
  t = clock() - t;
  for (int o = 0; o < 100000 ; o++){
    printf("%d ",bubble_vetor100k_crescente[o]);
  }
  printf("\n");

  printf("Tempo de execucao: %lf ms\n", ((double)t)/((CLOCKS_PER_SEC/1000)));
  printf("Comparacoes %lf  Trocas %lf  ",comparacoes,trocas);

  return 0;
}
