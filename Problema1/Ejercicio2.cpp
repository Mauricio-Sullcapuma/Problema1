#include <iostream>
using namespace std;
int main() {
	double C, K, F;
	cout << "Ingrese la temperatura en grados Celcius: ";
	cin >> C;
	K = C + 273;
	F = C * 1.8 + 32;
	cout << "\nLa temperatura en grados Kelvin es: " << K;
	cout << "\nLa temperatura en grados Fahrenheit es: "<< F;

	return 0;
}
