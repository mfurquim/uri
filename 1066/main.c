#include <stdio.h>

int main()
{
	int impares = 0;
	int pares = 0;
	int negativos = 0;
	int positivos = 0;
	int number;

	for (int i = 0; i < 5; i++) {

		scanf("%d", &number);

		if (number % 2 == 0) {
			pares++;
		}
		else {
			impares++;
		}

		if (number < 0) {
			negativos++;
		}
		else if (number > 0) {
			positivos++;
		}
	}

	printf("%d valor(es) par(es)\n", pares);
	printf("%d valor(es) impar(es)\n", impares);
	printf("%d valor(es) positivo(s)\n", positivos);
	printf("%d valor(es) negativo(s)\n", negativos);

	return 0;
}
