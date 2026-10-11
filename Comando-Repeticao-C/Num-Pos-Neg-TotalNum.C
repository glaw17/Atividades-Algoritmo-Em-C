#include <stdio.h>
int main(){
    int numero, resposta;
    int somaPos=0, somaNeg=0, contPos=0, contNeg=0;

    do{
        printf("Digite o número: ");
        scanf("%d", &numero);
        //Vericando se o número é positivo ou negativo e atribuindo o numero digitado a sua respectiva variavel de soma e adicionando mais 1 ao seu contador respectivo
        if(numero>0){
            somaPos += numero;
            contPos += 1;
        }
        else if(numero<0){
            somaNeg += numero;
            contNeg += 1;
        }
        //Se o usuário digitar 1 o loop se repete, caso digite outro valor ele sai do loop
        printf("\nDigite 1 para continuar ou 0 para Sair: ");
        scanf("%d", &resposta);
    }while(resposta==1);
    
    printf("\n===============RESULTADO=============\n");
    printf("Soma dos numeros positivos: %d\n", somaPos);
    printf("Soma dos numeros negativos: %d\n", somaNeg);
    printf("Quantidade de números positivos digitados: %d\n", contPos);
    printf("Quantidade de números negativos digitados: %d", contNeg);

    return 0;
}