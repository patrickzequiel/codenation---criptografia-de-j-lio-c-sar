#include <stdio.h>

int main()
{
	int i = 0;
	char frase[15000];
	printf("Digite o código a ser decifrado\n");
	scanf("%1500[^\n]", frase);
        while(frase[i] !='\0')
	{
		if(frase[i] > 96 && frase[i] < 122)
		{
			frase[i] -= 1;
		}
		else if(frase[i] > 64 && frase[i] < 91)
		{
			frase[i] -= 1;
		}
		i++;
	}
	printf("\n");
	printf("%s\n", frase);
	printf("Código decifrado\n");
	printf("\n");
	return(0);
}
