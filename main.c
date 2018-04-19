#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *arqAleat(int *);
/*
  FUNCAO DE RANDOM, O Q FOR 1 SERA OS ESCOLHIDOS DE TREINAMENTO DA PASTA, TANTO ASFALTO QUANTO GRAMA,
  LOGO O QUE SOBRA É TESTE
*/
int main (int argc, char *argv[]){
  int  *treinamento;
  treinamento = (int *)malloc(50*sizeof(int));
  treinamento = arqAleat(treinamento);

  /*int cont;
  for(cont= 0;cont<50;cont++){
    printf("%d  ",treinamento[cont]);
  }*/
  return 0;
}

int *arqAleat(int *vetor){
  int aletaux[25];
  int cont, contaux;
  srand((unsigned)time(NULL));
  for (cont =0; cont<50;cont++){
    vetor[cont]= 1;
  }
  for (cont =0; cont<25;cont++){
    aletaux[cont] = -1;
  }

  for (cont =0; cont<25;cont++){
    int valida =-1;
    aletaux[cont] = rand()%50;
    for(contaux=0;contaux<25;contaux++){
      if (aletaux[cont] == aletaux[contaux])
        valida++;
    }

    if(valida <1)
      vetor[aletaux[cont]] = 0;
    else
      cont--;
  }
 return vetor;
}
