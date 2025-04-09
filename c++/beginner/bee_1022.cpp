#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

	int a = 0, b = 0, c = 0, d = 0;

	cin >> a >> b >> c >> d;

	int par = a % 2;

	if (b > c and d > a and (c + d) > (a + b) and c > 0 and d > 0 and par == 0) {
		cout << "Valores aceitos" << endl;
	}
	else {
		cout << "Valores nao aceitos" << endl;}

	return 0;
}