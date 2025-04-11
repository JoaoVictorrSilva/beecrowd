#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int x = 0, y = 0;
	cin >> x >> y;

	if (x > y && x % y == 0)
	{
		cout << "Sao Multiplos" << endl;
	}
	else if (y % x == 0)
	{
		cout << "Sao Multiplos" << endl;
	}
	else
	{
		cout << "Nao sao Multiplos" << endl;
	}
	
	return 0;
}