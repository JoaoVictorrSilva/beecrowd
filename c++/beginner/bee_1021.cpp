#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main () {

	long double notas = 0.00;

	cin >> notas;

	int cem = 0, cinquenta = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;
	int cinquenta_cent = 0, vinte_cinco_cent = 0, dez_cent = 0, cinco_cent = 0, um_cent = 0;

	int n = notas * 100;

	while (n > 0) {

		if (n >= 10000) {
			cem += 1;
			n -= 10000;
			continue;
		}
		else if (n >= 5000) {
			cinquenta += 1;
			n -= 5000;
			continue;
		}
		else if (n >= 2000) {
			vinte += 1;
			n -= 2000;
			continue;
		}
		else if (n >= 1000) {
			dez += 1;
			n -= 1000;
			continue;
		}
		else if (n >= 500) {
			cinco += 1;
			n -= 500;
			continue;
		}
		else if (n >= 200) {
			dois += 1;
			n -= 200;
			continue;
		}

		// coins
		else if (n >= 100) {
			um += 1;
			n -= 100;
			continue;
		}
		else if (n >= 50) {
			cinquenta_cent += 1;
			n -= 50;
			continue;
		}
		else if (n >= 25) {
			vinte_cinco_cent += 1;
			n -= 25;
			continue;
		}
		else if (n >= 10) {
			dez_cent += 1;
			n -= 10;
			continue;
		}
		else if (n >= 5) {
			cinco_cent += 1;
			n -= 5;
			continue;
		}
		
		um_cent += 1;
		n -= 1;
	} 

	cout << "NOTAS:" << endl;
	cout << cem << " nota(s) de R$ 100.00" << endl;
	cout << cinquenta << " nota(s) de R$ 50.00" << endl;
	cout << vinte << " nota(s) de R$ 20.00" << endl;
	cout << dez << " nota(s) de R$ 10.00" << endl;
	cout << cinco << " nota(s) de R$ 5.00" << endl;
	cout << dois << " nota(s) de R$ 2.00" << endl;
	cout << "MOEDAS:" << endl;
	cout << um << " moeda(s) de R$ 1.00" << endl;
	cout << cinquenta_cent << " moeda(s) de R$ 0.50" << endl;
	cout << vinte_cinco_cent << " moeda(s) de R$ 0.25" << endl;
	cout << dez_cent << " moeda(s) de R$ 0.10" << endl;
	cout << cinco_cent << " moeda(s) de R$ 0.05" << endl;
	cout << um_cent << " moeda(s) de R$ 0.01" << endl;

	return 0;
}