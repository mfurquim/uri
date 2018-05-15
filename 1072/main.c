#include <stdio.h>

int main()
{
	int out = 0;
	int in = 0;

	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int a = 0;
		scanf("%d", &a);

		if (a >= 10 && a <= 20) {
			in++;
		}
		else {
			out++;
		}
	}

	printf("%d in\n", in);
	printf("%d out\n", out);

	return 0;
}

