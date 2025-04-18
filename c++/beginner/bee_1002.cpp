#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

    double n = 3.14159;
    double R = 0.0;

    cin >> R;

    cout << "A=" << fixed << setprecision(4) << n * pow(R, 2) << endl;

    return 0;
}