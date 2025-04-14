#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

	int start_time = 0;
	int end_time = 0;

	cin >> start_time >> end_time;

	if (start_time == end_time)
	{
		cout << "O JOGO DUROU 24 HORA(S)" << endl;
		return 0;
	}

	int hours = 0;

	while (start_time != end_time && start_time >= 0 && start_time <= 24)
	{
		start_time += 1;
		hours += 1;

		if (start_time >= 24)
		{
			start_time = 0;
		}
	}

	cout << "O JOGO DUROU " << hours << " HORA(S)" << endl;

	return 0;
}