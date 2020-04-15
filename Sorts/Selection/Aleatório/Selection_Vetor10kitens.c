#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(){

  int selec_vet10k [10000];

  for (int s = 0; s < 10000; s++){
    selec_vet10k [s] = rand() % 10000;
  }


  printf("---ORGANIZAÇAO DA LISTA COM NUMEROS RANDOMICOS 10k itens\n   ");
  double comparacoes = 0;
  double trocas = 0;

  clock_t t;
  int menor_do_menor = selec_vet10k[0];
  t = clock();
  for (int i = 0 ; i<10000 ; i ++){
    int menor = selec_vet10k[i];
    int posmenor = i;
    for (int j = i ; j<10000 ; j ++){
      comparacoes ++;
      if (selec_vet10k[j]<menor){

        menor = selec_vet10k[j];
        posmenor = j;
      }

    }
    int a = selec_vet10k[i];

    selec_vet10k[i] = menor;
    selec_vet10k[posmenor] = a;
    trocas++;
  }

  t = clock() - t;
  for (int o = 0; o < 10000 ; o++){
    printf("%d ",selec_vet10k[o]);
  }
  printf("\n");

  printf("Tempo de execucao: %lf ms\n", ((double)t)/((CLOCKS_PER_SEC/1000)));
  printf("Comparacoes %lf  Trocas %lf  ",comparacoes,trocas);

  return 0;
}
