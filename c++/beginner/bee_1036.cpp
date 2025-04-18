#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

	double a = 0.0, b = 0.0, c = 0.0;
	cin >> a >> b >> c;

	double raiz = pow(b, 2) + (-4 * a * c);

	if (a == 0 || raiz < 0)
	{
		cout << "Impossivel calcular" << endl;
		return 0;
	}

	raiz = sqrt(raiz);

	double x1 = (-b + raiz) / (2 * a);
	double x2 = (-b - raiz) / (2 * a);

	cout << "R1 = " << fixed << setprecision(5) << x1 << endl;
	cout << "R2 = " << fixed << setprecision(5) << x2 << endl;

	return 0;
}