#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(){

  int bubble_vetor10k [10000];

  for (int s = 0; s < 10000; s++){
    bubble_vetor10k [s] = rand() % 10000;
  }


  printf("---ORGANIZAÇAO DA LISTA COM NUMEROS RANDOMICOS 10k itens\n   ");

  clock_t t;
  int comparacoes = 0;
  int trocas = 0;
  t = clock();
  for (int i = 10000; i >= 1; i--){
      int flag = 0;

      for(int j = 1; j < i; j ++){
        comparacoes ++;
        if (bubble_vetor10k[j-1]>bubble_vetor10k[j]){
          trocas ++;
          int a = bubble_vetor10k[j];
          bubble_vetor10k[j] = bubble_vetor10k [j-1];
          bubble_vetor10k[j-1] = a;
          flag = 1;
        }
      }
      if (flag == 0){
          break;
      }
  }
  t = clock() - t;
  for (int o = 0; o < 10000 ; o++){
    printf("%d ",bubble_vetor10k[o]);
  }
  printf("\n");

  printf("Tempo de execucao: %lf ms\n", ((double)t)/((CLOCKS_PER_SEC/1000)));
  printf("Comparacoes %d  Trocas %d  ",comparacoes,trocas);

  return 0;
}
