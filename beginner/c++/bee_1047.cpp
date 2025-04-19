#include <stdio.h>
#include <iostream>

using namespace std;

int main() {

	int hora_inicial = 0;
	int minuto_inicial = 0;
	int hora_final = 0;
	int minuto_final = 0;

	cin >> hora_inicial >> minuto_inicial >> hora_final >> minuto_final;

	if (hora_inicial == hora_final && minuto_inicial == minuto_final)
	{
		cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
		return 0;
	}

	int minuto_count = 0;

	while (hora_inicial != hora_final || minuto_inicial != minuto_final)
	{
		if (minuto_inicial == 60 || hora_inicial == 24)
		{
			if (minuto_inicial == 60)
			{
				minuto_inicial = 0;
				hora_inicial += 1;
			}
			else if (hora_inicial == 24)
			{
				hora_inicial = 0;
			}

			continue;
		}

		minuto_inicial += 1;
		minuto_count += 1;
	}

	if (minuto_count < 60) {cout << "O JOGO DUROU 0 HORA(S) E " << minuto_count << " MINUTO(S)" << endl;}
	
	else {

		int horas = minuto_count % 60;
		int minutos = minuto_count / 60;

		if (hora_inicial > hora_final)
		{
			cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;
		}
		else
		{
			cout << "O JOGO DUROU " << minutos << " HORA(S) E " << horas << " MINUTO(S)" << endl;
		}

	}

	return 0;
}