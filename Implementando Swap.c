#include <stdio.h>

void swap(int *vetor, int direcao)
{
    int i, j, maior, posicao, troca;
    if (direcao == 0) //do maior para o menor
    {
        for (i = 0; i < ((sizeof(vetor)/2)); i++)
        {
            maior = 0;
            for (j = i; j < (sizeof(vetor)/2)+ 1; j++)
            {
                if (vetor[j] > maior)
                {
                    maior = vetor[j];
                    posicao = j;
                }
            }
            troca = vetor[i];
            vetor[i] = vetor[posicao];
            vetor[posicao] = troca;
        }
    }
    else if(direcao == 1) //do menor para o maior
    {
        for (i = 0; i < ((sizeof(vetor)/2)); i++)
        {
            maior = 999;
            for (j = i; j < (sizeof(vetor)/2)+ 1; j++)
            {
                if (vetor[j] < maior)
                {
                    maior = vetor[j];
                    posicao = j;
                }
            }
            troca = vetor[i];
            vetor[i] = vetor[posicao];
            vetor[posicao] = troca;
        }
    }
}

int main(void)
{
    int vetor[] = {1, 3 , 2, 5, 4};
    int entrada;
    scanf("%d", &entrada);
    swap(vetor, entrada);
    for (int i = 0; i < (sizeof(vetor)/4); i++)
    {
        printf("%d\n", vetor[i]);
    }
    return 0;
}
