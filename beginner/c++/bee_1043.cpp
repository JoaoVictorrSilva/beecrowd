#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;

	cin >> a >> b >> c;

	if ((a + b) > c && (a + c) > b && (b + c) > a)
	{
		cout << "Perimetro = " << fixed << setprecision(1) << (a + b + c) << endl;
	}
	else 
	{
		cout << "Area = " << fixed << setprecision(1) << ((a + b) * c) / 2 << endl;
	}

	return 0;
}