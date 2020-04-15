#include<stdio.h>
#include<stdlib.h>
int main(){
  int c = 0 ;
  printf("Digite o tamanho de vetor e em seguida os valores do vetor: \n");
  scanf("%d",&c);
  int lista [c];
  for (int d = 0; d < c; d++){
    int h = 0;
    scanf("%d",&h);
    lista [d] = h;
  }

  for (int z = 0; z < c; z++){
    printf("%d ",lista[z]);
  }
  printf("\n");

  for(int i = 1; i < c; i++ ){
    int pivo = lista[i];
    int j = i-1;
    while (j >=0 && lista[j]>pivo) {
      lista[j+1]= lista[j];
      j--;
    }
    lista[j+1]=pivo;

    for (int o = 0; o < c ; o++){
      printf("%d ",lista[o]);
    }

    printf("\n");
  }
  for (int o = 0; o < c ; o++){
    printf("%d ",lista[o]);
  }
  return 0;
}
