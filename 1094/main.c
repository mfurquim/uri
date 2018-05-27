#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int cobaias = 0;
	int coelhos = 0;
	int ratos = 0;
	int sapos = 0;

	for (int i = 0; i < n; i++) {
		int q = 0;
		char t = ' ';

		scanf("%d %c", &q, &t);

		cobaias += q;

		switch (t) {
		case 'C':
			coelhos += q;
			break;

		case 'R':
			ratos += q;
			break;

		case 'S':
			sapos += q;
			break;

		default:
			break;
		}
	}

	printf("Total: %d cobaias\n", cobaias);
	printf("Total de coelhos: %d\n", coelhos);
	printf("Total de ratos: %d\n", ratos);
	printf("Total de sapos: %d\n", sapos);
	printf("Percentual de coelhos: %2.2f %%\n", (float) 100*coelhos/cobaias);
	printf("Percentual de ratos: %2.2f %%\n",   (float) 100*ratos/cobaias);
	printf("Percentual de sapos: %2.2f %%\n",   (float) 100*sapos/cobaias);

	return 0;
}

