#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

void sort_char(char *vetor, int entrada)
{
    char troca, comparacao;
    int d = 0, tamanho;

    tamanho = strlen(vetor);
    
    while (d < tamanho)
    {
        if (entrada == 0)
        {
            comparacao = 'z';
            for (int i = d; vetor[i] != '\0'; i++)
            {
                if (comparacao > vetor[i])
                {
                    comparacao = vetor[i];

                    troca = vetor[d];
                    vetor[d] = comparacao;
                    vetor[i] = troca; 
                }
            }
        }
        else if (entrada == 1)
        {
            comparacao = 'a';
            for (int i = d; vetor[i] != '\0'; i++)
            {
                if (comparacao < vetor[i])
                {
                    comparacao = vetor[i];

                    troca = vetor[d];
                    vetor[d] = comparacao;
                    vetor[i] = troca; 
                }
            }
        }
        d++;
    }
}
     
int main(int argc, char const *argv[])
{
    char vetor[101];
    int entrada;

    printf("Digite as letras que o vetor vai guardar\n");
    scanf("%[^\n]", vetor);

    printf("Digite a ordem, crescente 0 ou decrescente 1\n");
    scanf("%d", &entrada); //usuario escolhe a ordem, 1 decrescente e 0 crescente, outros números nada faz
    
    sort_char(vetor, entrada);
    
    printf("Vetor ordenado\n");
    
    printf("%s\n", vetor);
    return 0;
}