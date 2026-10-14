#include <stdio.h>
int main(){
    int numero, resultado = 1;
    printf("=============FATORIAL=============\n");
    //Entrada do numero
    printf("Digite um número inteiro positivo entre 0 e 10 para ver o seu fatorial: ");
    scanf("%d", &numero);
    //Repete até que o usúario digite um valor positivo entre 0 e 10
    while ((numero<0)||(numero>10)){
        printf("Erro! Digite um valor entre 0 e 10! ");
        scanf("%d", &numero);
    }
    if (numero == 0){
        printf("\n0! = 1");
    }
    else{
        printf("%d! = ", numero);
        //i recebe o valor de número para que se multiplique ao resultado que vale 1, fazendo com que o resultado receba também o valor de número, repete até que i seja igual a 1, e a cada loop subtrai 1 de i
        for (int i = numero; i>=1; i--){
            if(i!=1){
                printf("%d x ", i);
            }
            else{
                printf("%d = ", i);
            }
            resultado *= i;
        }
        //Quando terminar a operação mostra o resultado da fatoração na tela
        printf("%d", resultado);
    }
    return 0;
}
