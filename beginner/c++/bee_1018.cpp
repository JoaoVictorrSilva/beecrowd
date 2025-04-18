#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

	// 100, 50, 20, 10, 5, 2 and 1

	int n = 0;
	cin >> n;

	int cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;

	int aux = n;
	while (aux != 0) {

		// 100
		if (aux >= 100) {
			cem += 1;
			aux -= 100;
			continue;
		}
		// 50
		else if (aux >= 50) {
			cinquenta += 1;
			aux -= 50;
			continue;
		}
		// 20
		else if (aux >= 20) {
			vinte += 1;
			aux -= 20;
			continue;
		}
		// 10
		else if (aux >= 10) {
			dez += 1;
			aux -= 10;
			continue;
		}
		// 5
		else if (aux >= 5) {
			cinco += 1;
			aux -= 5;
			continue;
		}
		// 2
		else if (aux >= 2) {
			dois += 1;
			aux -= 2;
			continue;
		}
		// 1
		else {
			um += 1;
			aux -= 1;
		}
	}

	cout << n << endl;
	cout << cem << " nota(s) de R$ 100,00" << endl;
	cout << cinquenta << " nota(s) de R$ 50,00" << endl;
	cout << vinte << " nota(s) de R$ 20,00" << endl;
	cout << dez << " nota(s) de R$ 10,00" << endl;
	cout << cinco << " nota(s) de R$ 5,00" << endl;
	cout << dois << " nota(s) de R$ 2,00" << endl;
	cout << um << " nota(s) de R$ 1,00" << endl;

	return 0;
}