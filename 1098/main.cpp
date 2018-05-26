#include <iostream>     // std::cout, std::fixed
#include <iomanip>      // std::setprecision

int main()
{

	for (float i = 0; i < 2.1; i+=0.2) {
		for (float j = i + 1; j <= i + 3; j++) {
			std::cout << std::setprecision(2) << "I=" << i << " J=" << std::setprecision(2) << j << "\n";
		}
	}

	return 0;
}

