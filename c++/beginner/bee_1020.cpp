#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main () {

	int years = 0, months = 0, days = 0;

	cin >> days;

	while (days >= 30) {

		if (days >= 365) {
			years += 1;
			days -= 365;
			continue;
		}

		else if (days >= 30) {
			months += 1;
			days -= 30;
			continue;
		}

		break;
	}

	cout << years << " ano(s)" << endl;
	cout << months << " mes(es)" << endl;
	cout << days << " dia(s)" << endl;

	return 0;
}