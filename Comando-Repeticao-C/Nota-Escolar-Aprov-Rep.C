#include <stdio.h>

int main (){
    float nota, somaNota = 0, media;
    int contAprov = 0, contRecup = 0, contReprov = 0;
    int resposta;

    printf("===========Calculo=Situação=Escolar============\n");
    do{
        //Entrada das 3 Notas do Aluno e adicionando a nota digitada na variavel somaNota a cada loop
        for (int i=1; i<=3; i++){
            printf("Digite a %dº Nota: ", i);
            scanf("%f", &nota);
            somaNota += nota;
        }

        //Calculo da média das Notas
        media = somaNota/3;

        //Verificação da Situação do Aluno
        if (media >=7){
            printf("\nAluno Aprovado!");
            contAprov += 1;
        }
        else if(media >= 5){
            printf("\nAluno em Recuperação!");
            contRecup += 1;
        }
        else{
            printf("\nAluno Reprovado!");
            contReprov += 1;
        }
        //Se o usuário digitar 1 o código se repete até que ele que digite um valor diferente
        printf("\nDigite 1 para calcular a situação de outro aluno, ou 0 para Sair: ");
        scanf("%d", &resposta);
    }while(resposta == 1);

    printf("\n=========Resultado=========\n");
    printf("Alunos Aprovados: %d\n", contAprov);
    printf("Alunos em Recuperação: %d\n", contRecup);
    printf("Alunos Reprovados: %d", contReprov);

    return 0;
}
