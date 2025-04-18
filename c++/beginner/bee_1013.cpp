#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {

	int A = 0, B = 0, C = 0;

	cin >> A >> B >> C;

	int maiorAB = (A + B + abs(A - B)) / 2;
	int maiorAB_C = (maiorAB + C + abs(maiorAB - C)) / 2;

	cout << maiorAB_C << " eh o maior" << endl;

	return 0;
}