#include <stdio.h>

int min(int, int);
int max(int, int);

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int a = 0;
		int b = 0;

		scanf("%d %d", &a, &b);

		int minv = min(a,b);
		int maxv = max(a,b);

		if (minv % 2 == 0) {
			minv++;
		}
		else {
			minv += 2;
		}

		int sum = 0;

		for (int j = minv; j < maxv; j+=2) {
			sum += j;
		}

		printf("%d\n", sum);
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

