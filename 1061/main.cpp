#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
	int dayI, hourI, minI, secI;
	int dayF, hourF, minF, secF;
	char dd[4];
	char d1, d2;

	scanf("%s %d", dd, &dayI);
	scanf("%d %c %d %c %d", &hourI, &d1, &minI, &d2, &secI);
	fflush(stdin);
	scanf("%s %d", dd, &dayF);
	scanf("%d %c %d %c %d", &hourF, &d1, &minF, &d2, &secF);

	int dayD, hourD, minD, secD;
	if (secF < secI) {
		minF -= 1;
		secF += 60;
	}

	if (minF < minI) {
		hourF -= 1;
		minF += 60;
	}

	if (hourF < hourI) {
		dayF -= 1;
		hourF += 24;
	}

	secD  = secF  - secI;
	minD  = minF  - minI;
	hourD = hourF - hourI;
	dayD  = dayF  - dayI;

	cout << dayD  << " dia(s)"     << endl;
	cout << hourD << " hora(s)"    << endl;
	cout << minD  << " minuto(s)"  << endl;
	cout << secD  << " segundo(s)" << endl;

	return 0;
}
