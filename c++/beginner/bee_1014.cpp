#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

	int X = 0;
	double Y = 0;

	cin >> X;
	cin >> Y;

	cout << fixed << setprecision(3) << (X / Y) << " km/l" << endl;

	return 0;
}