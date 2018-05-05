#include <stdio.h>

int main()
{
	int number;
	scanf("%d", &number);

	for (int i = 1; i <= number; i+=2) {

		printf("%d\n", i);
	}

	return 0;
}
