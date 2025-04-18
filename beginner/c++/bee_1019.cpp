#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main () {

	int n_seconds = 0;

	cin >> n_seconds;

	int hours = 0, minutes = 0, seconds = 0;

	// 1 hr = 3600 sec

	while (n_seconds  > 0) {

		if (n_seconds > 3600) {
			hours += 1;
			n_seconds -= 3600;
			continue;
		}
		else if (n_seconds > 60) {
			minutes += 1;
			n_seconds -= 60;
			continue;
		}

		seconds += 1;
		n_seconds -= 1;
	}

	cout << hours << ":" << minutes << ":" << seconds << endl;

	return 0;
}