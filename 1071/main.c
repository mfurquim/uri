#include <stdio.h>

int min(int, int);
int max(int, int);

int main()
{
	int n1, n2;
	scanf("%d %d", &n1, &n2);

	printf("%d e %d\n", n1, n2);

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
