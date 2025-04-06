#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

using ld = long double;

int main () {

	ld A = 0, B = 0, C = 0;

	cin >> A >> B >> C;

	// a)
	// A = (b.h) / 2
	ld rectangled_triangle = (A * C) / 2;

	// b)
	// A = pi.r²
	ld radiu_circle = 3.14159 * pow(C, 2);

	// c)
	// A = ((a + b)h)/2
	ld trapezium = ((A + B) * C) / 2;

	// d)
	// A = L²
	ld square = pow(B, 2);

	// e)
	// A = b.h
	ld rectangled = A * B;

	cout << "TRIANGULO: " << fixed << setprecision(3) << rectangled_triangle << endl;
	cout << "CIRCULO: " << fixed << setprecision(3) << radiu_circle << endl;
	cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezium << endl;
	cout << "QUADRADO: " << fixed << setprecision(3) << square << endl;
	cout << "RETANGULO: " << fixed << setprecision(3) << rectangled << endl;

	return 0;
}