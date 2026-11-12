#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor = NULL, *temp, num, cont = 0;

    do
    {
        printf("Digite o %d número: ", cont + 1);
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }

        temp = (int *)realloc(vetor, sizeof(int) * (cont + 1));
        if (temp != NULL)
        {
            vetor = temp;
            vetor[cont] = num;
            cont++;
        }
        else
        {
            printf("Falha ao fazer o Realloc");
            free(vetor);
            return 1;
        }
    } while (num != 0);

    for (int i = 0; i < cont; i++)
    {
        printf("Número %d: %d\n", i + 1, vetor[i]);
    }

    free(vetor);
    return 0;
}