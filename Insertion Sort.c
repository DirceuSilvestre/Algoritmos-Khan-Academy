#include <stdio.h>

int main(int argc, char const *argv[])
{
	int array[101] = {3, 2, 4, 9, 6, 1}, entrada, tamanho, troca;
	while(1)
	{
		printf("Quer acrester um numero ao vetor? para não digite 0\n");
		scanf("%d", &entrada);
		if (entrada == 0){break;}
		else
		{
			tamanho = 0;
			for (int i = 0; array[i] != '\0'; i++){tamanho++;}
			array[tamanho + 1] = '\0';
			array[tamanho] = entrada;

			for (int i = 1; array[i] != '\0'; i++)
			{
				for (int j = i; j > 0; j--)
				{
					if (array[j] < array[j - 1])
					{
						troca = array[j];
						array[j] = array[j - 1];
						array[j - 1] = troca;
					}
				}
			}
			printf("(");
			for (int i = 0; array[i] != '\0'; i++)
			{
				if (array[i + 1] == '\0')
				{
					printf("%d", array[i]); 
				}
				else
				{
					printf("%d, ", array[i]);
				}
			}
			printf(")\n");
		}
	}
	return 0;
}