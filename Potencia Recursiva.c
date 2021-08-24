#include <stdio.h>

int potencia(int base, int expoente)
{
	if (expoente == 1)
	{
		return base;
	}
	else
	{
		return base * potencia(base, expoente - 1);
	}
}

int main(int argc, char const *argv[])
{
	int base, expoente;
	printf("Insira a potencia e a base com um espaço entre eles\n");
	scanf("%d %d", &base, &expoente);
	printf("%d\n", potencia(base, expoente));
	return 0;
}