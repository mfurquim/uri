#include <stdio.h>

int min(int, int);
int max(int, int);

int main()
{
	int n1, n2;
	scanf("%d %d", &n1, &n2);

	int max_value = max(n1,n2);
	int min_value = min(n1,n2);

	// Min should start odd
	if (min_value % 2 == 0) {
		min_value++;
	}
	// If odd, doesn't include itself
	else {
		min_value+=2;
	}

	int sum = 0;
	// Interval b/w and not including (min,max), only odds
	for (int i = min_value; i < max_value; sum += i, i+=2);

	printf("%d\n", sum);

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
