#include <stdio.h>
   
// A torre se move apenas em linha reta e o loop simula o movimento para a direita
// Foi usado o recurso de recursividade para todos os loops
void moverTorre (int casas){
    if (casas > 0) {
        printf("Torre se moveu para a direita!\n");
        moverTorre(casas - 1);
    }
}
// O bispo que se move na diagonal e cada iteracao do loop representa um deslocamento
    void moverBispo (int casas){
    if (casas > 0) {
        printf("Bispo se moveu para a direita!\n");
        printf("Bispo se moveu para cima!\n");
        moverBispo(casas - 1);
    }
    }
// A rainha que pode se mover para qualquer direcao, mas como foi pedido aqui ela se move somente para a esquerda.
    void moverRainha (int casas){
        if (casas > 0) {
        printf("Rainha se moveu para a esquerda!\n"); 
        moverRainha(casas - 1);  
        }
    }
// o cavalo se move apenas em "L"  e o loop simula o movimento para a direita
//Foi usado o recurso de break e continue   
    void moverCavalo(){
      for (int i = 0; i < 1; i++)
      {
       printf("Cavalo se moveu para cima!\n");
       printf("Cavalo se moveu para cima!\n");	
       printf("Cavalo se moveu para direita!\n");	
       continue;
       printf("Cavalo se moveu para baixo!\n");	
       break;
      
    }
    }
//Funçao int para o movimento das casas 
    int main() {
    moverTorre(5);  
    moverBispo(5);  
    moverRainha(8);
    moverCavalo();

   return 0;
}
