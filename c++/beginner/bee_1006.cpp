#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

	double A = 0.0;
	double B = 0.0;
	double C = 0.0;
	
	cin >> A;
	cin >> B;
	cin >> C;

	double averege = ((A * 2) + (B * 3) + (C * 5)) / 10;

	cout << "MEDIA = " << fixed << setprecision(1) << averege << endl;


	return 0;
}