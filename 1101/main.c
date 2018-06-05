#include <stdio.h>

int min(int, int);
int max(int, int);

int main()
{
	while (1)
	{
		int a = 0;
		int b = 0;

		scanf("%d %d", &a, &b);

		if (a <= 0 || b <= 0) {
			break;
		}

		int minv = min(a,b);
		int maxv = max(a,b);

		int sum = 0;

		for (int j = minv; j <= maxv; j++) {
			printf("%d ", j);
			sum += j;
		}

		printf("Sum=%d\n", sum);
	}

	return 0;
}

int min(int a, int b)
{
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}

int max(int a, int b)
{
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

