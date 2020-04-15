#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(){

  int bubble_vetor10k [10000];
  int bubble_vetor10k_crescente [10000];
  int bubble_vetor10k_decrescente [10000];
  int bubble_vetor50k [10000];
  int bubble_vetor50k_crescente [10000];
  int bubble_vetor50k_decrescente [10000];
  int var_decrescente = 10000;
  int var_decrescente50 = 50000;
  for (int s = 0; s < 10000; s++){
    bubble_vetor10k_crescente [s] = s+1;
    bubble_vetor10k_decrescente [s] = var_decrescente ;
    bubble_vetor10k [s] = rand() % 10000;
    var_decrescente--;
  }
  for (int r = 0; r < 50000; r++){
    bubble_vetor50k_crescente [r] = r+1;
    bubble_vetor50k_decrescente [r] = var_decrescente50 ;
    bubble_vetor50k [r] = rand() % 10000;
    var_decrescente50--;
  }

  //
  // // PARA O VETOR DE 10K ITENS ALEATÓRIO
  // printf("---Os 100 primeiros itens da lista aleatoria:   ");
  // for (int o = 0; o < 100 ; o++){
  //   printf("%d ",bubble_vetor10k[o]);
  // }
  // printf("\n");
  // printf("---Os 100 ultimos itens da lista aleatoria:   ");
  // for (int o = 9900; o < 10000 ; o++){
  //   printf("%d ",bubble_vetor10k [o]);
  // }
  // printf("\n");printf("\n");printf("\n");printf("\n");
  // // PARA O VETOR DE 10K ITENS CRESCENTE
  // printf("---Os 100 primeiros itens da lista CRESCENTE:   ");
  // for (int o = 0; o < 100 ; o++){
  //   printf("%d ",bubble_vetor10k_crescente[o]);
  // }
  // printf("\n");
  // printf("---Os 100 ultimos itens da lista CRESCENTE:   ");
  // for (int o = 9900; o < 10000 ; o++){
  //   printf("%d ",bubble_vetor10k_crescente [o]);
  // }
  // printf("\n");printf("\n");printf("\n");printf("\n");
  // // PARA O VETOR DE 10K ITENS DECRESCENTE
  // printf("---Os 100 primeiros itens da lista DECRESCENTE:   ");
  // for (int o = 0; o < 100 ; o++){
  //   printf("%d ",bubble_vetor10k_decrescente[o]);
  // }
  // printf("\n");
  // printf("---Os 100 ultimos itens da lista DECRESCENTE:   ");
  // for (int o = 9900; o < 10000 ; o++){
  //   printf("%d ",bubble_vetor10k_decrescente [o]);
  // }
  // printf("\n");printf("\n");printf("\n");
  //


  //ORGANIZAÇÃO DA LISTA COM NÚMEROS RANDOMICOS 50k itens
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
  printf("1");
  //ORGANIZAÇÃO DA LISTA COM NÚMEROS RANDOMICOS 50k itens
  printf("---ORGANIZAÇAO DA LISTA COM NUMEROS RANDOMICOS 50k itens\n   ");

  clock_t ti;
  int comparacoes50 = 0;
  int trocas50 = 0;
  t = clock();
  for (int i = 50000; i >= 1; i--){
      int flag = 0;

      for(int j = 1; j < i; j ++){
        comparacoes50 ++;
        if (bubble_vetor50k[j-1]>bubble_vetor50k[j]){
          trocas50 ++;
          int a = bubble_vetor50k[j];
          bubble_vetor50k[j] = bubble_vetor50k [j-1];
          bubble_vetor50k[j-1] = a;
          flag = 1;
        }
      }
      if (flag == 0){
          break;
      }
  }
  ti = clock() - ti;
  for (int o = 0; o < 50000 ; o++){
    printf("%d ",bubble_vetor50k[o]);
  }
  printf("\n");

  printf("Tempo de execucao: %lf ms\n", ((double)ti)/((CLOCKS_PER_SEC/1000)));
  printf("Comparacoes %d  Trocas %d  ",comparacoes50,trocas50);
  return 0;
}
