#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main () {

	string name = "";
	double fixed_salary = 0.0;
	double total_sale = 0.0;

	cin >> name;
	cin >> fixed_salary;
	cin >> total_sale;

	double salary_end_month = (total_sale * 0.15) + fixed_salary;

	cout << "TOTAL = R$ " << fixed << setprecision(2) << salary_end_month << endl;

	return 0;
}