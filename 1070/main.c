#include <stdio.h>

int main()
{
	int number;
	scanf("%d", &number);

	if (number % 2 == 0) {
		number++;
	}

	for (int i = 0; i < 6; i++, number+=2) {

		printf("%d\n", number);
	}

	return 0;
}
