#include <stdio.h>
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<double> v(3, 0);

	cin >> v[0] >> v[1] >> v[2];
	sort(v.begin(), v.end(), greater<int>());

	if (v[0] >= v[1] + v[2])
	{
		cout << "NAO FORMA TRIANGULO" << endl;
		return 0;
	}
	if (pow(v[0], 2) == (pow(v[1], 2) + pow(v[2], 2)))
	{
		cout << "TRIANGULO RETANGULO" << endl;
	}
	if (pow(v[0], 2) > (pow(v[1], 2) + pow(v[2], 2)))
	{
		cout << "TRIANGULO OBTUSANGULO" << endl;
	}
	if (pow(v[0], 2) < (pow(v[1], 2) + pow(v[2], 2)))
	{
		cout << "TRIANGULO ACUTANGULO" << endl;
	}
	if (v[0] == v[1] && v[0] == v[2])
	{
		cout << "TRIANGULO EQUILATERO" << endl;
	}
	if ((v[0] == v[1] && v[0] != v[2]) || (v[0] == v[2] && v[0] != v[1]) || (v[1] == v[2] && v[1] != v[0]))
	{
		cout << "TRIANGULO ISOSCELES" << endl;
	}

	return 0;
}