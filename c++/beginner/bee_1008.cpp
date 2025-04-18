#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main () {

	int employe = 0;
	int hours = 0;
	double received_hour = 0;

	cin >> employe;
	cin >> hours;
	cin >> received_hour;

	cout << "NUMBER = " << employe << endl;
	cout << "SALARY = U$ " << fixed << setprecision(2) << hours * received_hour << endl;  

	return 0;
}