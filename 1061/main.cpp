#include <iostream>
#include <string>
#include <regex>

using namespace std;
using namespace std::regex_constants;

int main()
{
	string line;
	smatch sm;

	regex day("^Dia (\\d+)$");
	regex hour("^(\\d+) : (\\d+) : (\\d+)$");

	getline(cin, line);
	regex_match(line, sm, day);

	int dayI;
	dayI = stoi(sm[1]);

	getline(cin, line);
	regex_match(line, sm, hour);

	int hourI, minI, secI;
	hourI = stoi(sm[1]);
	minI  = stoi(sm[2]);
	secI  = stoi(sm[3]);

	getline(cin, line);
	regex_match(line, sm, day);

	int dayF;
	dayF = stoi(sm[1]);

	getline(cin, line);
	regex_match(line, sm, hour);

	int hourF, minF, secF;
	hourF = stoi(sm[1]);
	minF  = stoi(sm[2]);
	secF  = stoi(sm[3]);

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
