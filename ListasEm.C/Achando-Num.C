#include <stdio.h>
int main(){
    int array[10];
    int pesquisa, cont=0, impressos=0;
    //Entrada dos números dentro do array
    for(int i=0; i<10; i++){
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &array[i]);
    }
    //Recebendo o número que vai procurar dentro do array
    printf("Agora digite o número que deseja procurar: ");
    scanf("%d", &pesquisa);

    //Comparando se o número a procurar é igual ao número que está naquela posição dentro do array e se estiver adiciona 1 no contador de vezes encontrada
    for (int i=0; i<10; i++){
        if (pesquisa == array[i]){
            cont += 1;
        }
    }
    //Mostra se encontrou pelo menos 1 vez
    if (cont!=0){
        printf("\nO número %d foi encontrado %d vezes!\n", pesquisa, cont);
        printf("Posições: ");
        //Utilizei a mesma lógica na linha 14, só que agora mostra o valor de i (a posição)
        for (int i=0; i<10;i++){
            if (pesquisa == array[i]){
                impressos++;
                //Se a quantidade de vezes imprimidas for diferente da quantidade de vezes que o número foi achado ele coloca a vírgula e espaço
                if (impressos!=cont){
                    printf("%d, ", i);
                }
                //Quando a quantidade de vezes imprimidas for igual a quantidade de vezes que o numero foi encontrado (quando estiver no último encontro) só coloca a posição
                else{
                    printf("%d", i);
                }
            }
        }
    }
    else{
        printf("O número %d não foi encontrado!", pesquisa);
    }
    return 0;
}