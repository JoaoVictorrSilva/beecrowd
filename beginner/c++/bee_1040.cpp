#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

	double n1 = 0.0;
	double n2 = 0.0;
	double n3 = 0.0;
	double n4 = 0.0;
	double ne = 0.0;

	cin >> n1 >> n2 >> n3 >> n4;

	double media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10;

	if (media >= 7.0)
	{
		cout << "Media: " << fixed << setprecision(1) << media << endl;
		cout << "Aluno aprovado." << endl;
		return 0;
	}

	else if (media < 5.0)
	{
		cout << "Media: " << fixed << setprecision(1) << media << endl;
		cout << "Aluno reprovado." << endl;
		return 0;
	}

	else if (media >= 5.0 && media <= 6.9)
	{
		cout << "Media: " << fixed << setprecision(1) << media << endl;
		cout << "Aluno em exame." << endl;
		cin >> ne;
		cout << "Nota do exame: " << ne << endl;

		double new_media = (media + ne) / 2;

		if (new_media >= 5.0)
		{		
			cout << "Aluno aprovado." << endl;
			cout << "Media final: " << fixed << setprecision(1) << new_media << endl;
		}
		else {
			cout << "Aluno reprovado." << endl;
			cout << "Media final: " << fixed << setprecision(1) << new_media << endl;
		}

	}


	return 0;
}