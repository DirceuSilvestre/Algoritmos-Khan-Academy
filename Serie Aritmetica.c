#include <stdio.h>

int main(int argc, char const *argv[])
{
	int entrada, serie_aritmetica;
	scanf("%d", &entrada);
	if (entrada%2 == 0)
	{
		serie_aritmetica = (entrada + 1) * (entrada/2);
	}
	else
	{
		serie_aritmetica = (entrada + 1) * ((entrada/2)+ 0.5);
	}
	printf("%d\n", serie_aritmetica);
	return 0;
}