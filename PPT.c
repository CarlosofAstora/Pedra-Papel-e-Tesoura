#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
  int jogadap, jogadacpu, jn; 

  do{
   do{
    printf("Digite: 1. Pedra, 2. Papel, 3. Tesoura, 4. Lagarto, 5.Spocky\n");
     scanf("%d", &jogadap);
    if((jogadap<1)||(jogadap>5))
      printf("Valor Inválido, insira novo valor.\n");
     }while((jogadap<1)||(jogadap>5));
     srand(time(NULL));
     jogadacpu=rand()%5+1;
     printf("O computador escolheu: %d", jogadacpu);
     
    if((jogadap==1&&jogadacpu==1)||(jogadap==2&&jogadacpu==2)||(jogadap==3&&jogadacpu==3)|| (jogadap==4&&jogadacpu==4)||(jogadap==5&&jogadacpu==5)){
    printf("\nEmpate.\nJogar Novamente?\n 1. Sim \n 2. Não\n");
    scanf("%d", &jn);
     }
    if((jogadap==1&&jogadacpu==3)||(jogadap==1&&jogadacpu==4)||(jogadap==2&&jogadacpu==1)||(jogadap==2&&jogadacpu==5)||(jogadap==3&&jogadacpu==2)||(jogadap==3&&jogadacpu==4)||(jogadap==4&&jogadacpu==3)||(jogadap==4&&jogadacpu==5)||(jogadap==5&&jogadacpu==1)||(jogadap==5&&jogadacpu==3)){
    printf("\nVitória.\nJogar Novamente?\n 1. Sim\n 2. Não\n");
    scanf("%d", &jn);
    }
    if((jogadap==1&&jogadacpu==2)||(jogadap==1&&jogadacpu==5)||(jogadap==2&&jogadacpu==3)||(jogadap==2&&jogadacpu==4)||(jogadap==3&&jogadacpu==1)||(jogadap==3&&jogadacpu==5)||(jogadap==4&&jogadacpu==3)||(jogadap==4&&jogadacpu==1)||(jogadap==5&&jogadacpu==2)||(jogadap==5&&jogadacpu==4)){
    printf("\nDerrota.\nJogar Novamente?\n 1. Sim\n 2. Não\n");
    scanf("%d", &jn);
    }
    }while(jn==1);
  }
  