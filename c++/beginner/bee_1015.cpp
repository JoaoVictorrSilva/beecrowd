#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

	double x0 = 0.0, x1 = 0.0, y0 = 0.0, y1 = 0.0;

	cin >> x0 >> y0;
	cin >> x1 >> y1;

	double distance = 0.0;
	distance = sqrt(pow((x1 - x0), 2) + pow((y1 - y0), 2));

	cout << fixed << setprecision(4) << distance << endl;

	return 0;
}