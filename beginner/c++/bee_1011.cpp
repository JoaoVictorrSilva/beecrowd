#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

	double r = 0.0;
	
	cin >> r;

	cout << "VOLUME = " << fixed << setprecision(3) << ((4 / 3.0) * 3.14159) * pow(r, 3) << endl;

	return 0;
}