#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool palindromo(char *palavra, int inicio, int fim)
{
	fim -= 1;
	if (inicio == fim){ return true;}
	else
	{
		if (palavra[inicio] == palavra[fim])
		{
			inicio++;
			return palindromo(palavra, inicio, fim);
		}
		else {return false;}
	}
}

int main(int argc, char const *argv[])
{
	char palavra[101];
	bool palindro;
	scanf("%[^\n]", palavra);
	palindro = palindromo(palavra, 0, strlen(palavra));
	if (palindro == true){printf("É palindromo\n");}
	else {printf("Não é palindromo\n");}
	return 0;
}