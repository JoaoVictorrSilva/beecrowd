#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {

    double A = 0;
    double B = 0;

    cin >> A;
    cin >> B;

    cout << "MEDIA = " << fixed << setprecision(5) << ((A * 3.5) + (B * 7.5)) / 11 << endl;  

    return 0;
}