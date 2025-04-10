#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>

using namespace std;

int main() {

	vector<pair<int, double>> itens;

	itens.push_back({1, 4.00});
	itens.push_back({2, 4.50});
	itens.push_back({3, 5.00});
	itens.push_back({4, 2.00});
	itens.push_back({5, 1.50});

	int x = 0, y = 0;

	cin >> x >> y;

	for (int i = 0; i < itens.size(); ++i)
	{
		if (x == itens[i].first)
		{
			cout << "Total: R$ " << fixed << setprecision(2) << y * itens[i].second << endl;
			break;
		}
	}

	return 0;
} 