#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {

	int product = 0;
	int unit = 0;
	double price = 0.0;
	double amount_paid = 0.0;

	for (int i = 0; i < 2; ++i){
		cin >> product >> unit >> price;
		amount_paid += unit * price;
	}

	cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << amount_paid << endl;

	return 0;
}