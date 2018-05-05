#include <stdio.h>

int main()
{
	int pares = 0;
	int number;

	for (int i = 0; i < 5; i++) {

		scanf("%d", &number);

		if (number % 2 == 0) {
			pares++;
		}
	}

	printf("%d valores pares\n", pares);

	return 0;
}
