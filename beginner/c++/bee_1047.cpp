#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

	int start_time = 0;
	int start_minutes = 0;
	int end_time = 0;
	int end_minutes = 0;

	cin >> start_time >> end_time;

	if (start_time == end_time && start_minutes == end_minutes)
	{
		cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
		return 0;
	}

	int hours = 0;
	int minutes = 0;

	while (start_time != end_time && start_minutes != end_minutes && start_time >= 0 && start_time <= 24)
	{

		if (start_time != end_time && start_minutes != end_minutes && start_minutes < 60)
		{
			start_minutes += 1;
			minutes += 1;
			continue;
		}

		else if (start_minutes == 60)
		{
			start_time += 1;
			hours += 1;
			minutes = 0;
			continue;
		}

		if (start_time >= 24)
		{
			start_time = 0;
			continue;
		}

		start_time += 1;
		hours += 1;
	}

	cout << "O JOGO DUROU " << hours << " HORA(S)" << endl;

	return 0;
}