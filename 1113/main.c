#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;

	scanf("%d %d", &a, &b);

	while (a != b)
	{
		if (a < b) {
			printf("Crescente\n");
		}
		else {
			printf("Decrescente\n");
		}

		scanf("%d %d", &a, &b);
	}

	return 0;
}

