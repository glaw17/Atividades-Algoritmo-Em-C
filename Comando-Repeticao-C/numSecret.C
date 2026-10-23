#include <stdio.h>
int main(){
    #define NUM_SEC 67
    int palpite, tentativas;

    printf("======ADIVINHE=O=NÚMERO======\n");
    //Repete até que o número de tentivas chegue a 10
    for (tentativas = 1; tentativas<=10; tentativas++){
        //Entrada
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite>NUM_SEC){
            printf("O número secreto é menor!\n\n");
        }
        else if (palpite<NUM_SEC){
            printf("O número secreto é maior!\n\n");
        }
        //Se acertar o número, ele mostra na tela e sai do for
        else{
            printf("\nParabéns! Você acertou!");
            break;
        }
    }
    //Só apresenta a mensagem se o usuário tiver chegado na décima tentativa
    if (tentativas == 11){
        printf("\nNúmeros de Tentativas Esgotadas! O número secreto era: %d", NUM_SEC);
    }
    return 0;
}
