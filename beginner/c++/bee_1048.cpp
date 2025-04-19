#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
	double salary = 0.00;
	cin >> salary;

	double earned = 0;

	if (salary <= 400.00){earned = 15;}
	if (salary > 400.00 && salary <= 800.00){earned = 12;}
	if (salary > 800.00 && salary <= 1200.00){earned = 10;}
	if (salary > 1200.00 && salary <= 2000.00){earned = 7;}
	if (salary > 2000.00){earned = 4;}

	cout << "Novo salario: " << fixed << setprecision(2) << salary + (salary * (earned / 100.00)) << endl;
	cout << "Reajuste ganho: " << fixed << setprecision(2) << salary * (earned / 100.00) << endl;
	cout << "Em percentual: " << fixed << setprecision(0) << earned << " %" << endl;

	return 0;
}