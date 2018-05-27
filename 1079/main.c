#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		float a = 0;
		float b = 0;
		float c = 0;

		scanf("%f %f %f", &a, &b, &c);
		printf("%.1f\n", ((a*2)+(b*3)+(c*5))/10);
	}

	return 0;
}

