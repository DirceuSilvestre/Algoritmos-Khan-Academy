#include <stdio.h>

int fatorial(int fator)
{
	if (fator == 2){return 2;}
	else{return (fator * fatorial(fator - 1));}
}

int main(int argc, char const *argv[])
{
	int fator, resultado;
	printf("Qual número quer saber o fatorial?\n");
	scanf("%d", &fator);
	if (fator <= 0){printf("1\n");}
	else{resultado = fatorial(fator); printf("%d\n", resultado);}
	return 0;
}