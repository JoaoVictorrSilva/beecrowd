#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	
	vector<int> values(3, 0);
	vector<int> values_aux(3, 0);

	cin >> values_aux[0] >> values_aux[1] >> values_aux[2];
	values = values_aux;

	sort(values_aux.begin(), values_aux.end());

	for (int i = 0; i < values_aux.size(); ++i)
	{
		cout << values_aux[i] << endl;
	}

	cout << endl;

	for (int i = 0; i < values_aux.size(); ++i)
	{
		cout << values[i] << endl;
	}

	return 0;
}