#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
  int jogadap, jogadacpu, jn; 

  do{
   do{
    printf("Digite: 1. Pedra, 2. Papel, 3. Tesoura\n");
     scanf("%d", &jogadap);
    if((jogadap<1)||(jogadap>3))
      printf("Valor Inválido, insira novo valor.\n");
     }while((jogadap<1)||(jogadap>3));
     srand(time(NULL));
     jogadacpu=rand()%3+1;
     printf("O computador escolheu: %d", jogadacpu);
     
    if((jogadap==1&&jogadacpu==1)||(jogadap==2&&jogadacpu==2)||(jogadap==3&&jogadacpu==3)){
    printf("\nEmpate.\nJogar Novamente?\n 1. Sim \n 2. Não\n");
    scanf("%d", &jn);
     }
    if((jogadap==1&&jogadacpu==3)||(jogadap==2&&jogadacpu==1)||(jogadap==3&&jogadacpu==2)){
    printf("\nVitória.\nJogar Novamente?\n 1. Sim\n 2. Não\n");
    scanf("%d", &jn);
    }
    if((jogadap==1&&jogadacpu==2)||(jogadap==2&&jogadacpu==3)||(jogadap==3&&jogadacpu==1)){
    printf("\nDerrota.\nJogar Novamente?\n 1. Sim\n 2. Não\n");
    scanf("%d", &jn);
    }
    }while(jn==1);
  }
  