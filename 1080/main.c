#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int b = 0;
	int x = 0;

	b = n;

	for (int i = 0; i < 99; i++) {
		scanf("%d", &n);

		if (b < n) {
			b = n;
			x = i+2;
		}
	}
	printf("%d\n%d\n", b, x);

	return 0;
}

