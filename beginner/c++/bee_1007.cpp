#include <stdio.h>
#include <iostream>

using namespace std;

int main () {

	int A = 0;
	int B = 0;
	int D = 0;
	int C = 0;

	cin >> A;
	cin >> B;
	cin >> C;
	cin >> D;

	int difference = (A * B) - (C * D);

	cout << "DIFERENCA = " << difference << endl;

	return 0;
}