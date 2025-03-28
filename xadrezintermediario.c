#include <stdio.h>

int main(){

    // Declaração de variáveis
    
    int torre = 0, bispo = 0, rainha = 0, cavalo = 1;

    // Mensagem de boas vindas
    
    printf("*** Desafio Movimentacao das peças de xadrez ***\n");

    // Estrutura de repetição while, para o movimento da torre
    // A torre se move apenas em linha reta e o loop simula o movimento para a direita

    //Printf para espacamento e melhor leitura do programa
    printf("\nMovimentacao da torre: \n\n");

    while (torre <= 4)
    {
        printf("Torre se moveu para a direita!\n");
        torre++;
    }
    
    // Estrutura de repeticao do while, para o movimento do bispo
    // O bispo que se move na diagonal e cada iteracao do loop representa um deslocamento
   
    printf("\nMovimentacao do bispo: \n\n");

    do
    {
        printf("Bispo se moveu para a direita!\n");
        printf("Bispo se moveu para cima!\n");
        bispo++;
    } while (bispo <= 4);
    
        printf("\nMovimentacao da rainha: \n\n");
    
    // Estrutura de repeticao for, para o movimento da rainha 
    // A rainha que pode se mover para qualquer direcao, mas como foi pedido aqui ela se move somente para a esquerda.
    
    for (rainha = 0; rainha <= 7; rainha++)
    {
        printf("Rainha se moveu para a esquerda!\n");
    }

        printf("\nMovimentacao do cavalo: \n\n");

    // Estrutura de repeticao for e while, para o movimento do cavalo 
    // o cavalo se move apenas em "L"  e o loop simula o movimento para a baixo e para a esquerda

    while (cavalo--)
    {
        for (int i = 0; i <= 1; i++)
        {
            printf("Cavalo se moveu para baixo!\n");
        }
            printf("Cavalo se moveu para a direita!\n");
    }
    
    
    //Return 0 para finalizar o programa
    return 0;

}
