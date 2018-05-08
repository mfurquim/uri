#include <stdio.h>

int main()
{
	int positivos = 0;
	float media = 0;
	float number;

	for (int i = 0; i < 6; i++) {

		scanf("%f", &number);

		if (number > 0) {
			media += number;
			positivos++;
		}
	}

	media /= positivos;

	printf("%d valores positivos\n", positivos);
	printf("%.1f\n", media);

	return 0;
}
