#include <iostream>
using namespace std;
int main() {
	int a=0;
	int b=0;
	while (a<=0 or b<=0) {
		cout << "\nIngresa solo numeros positivos";
		cout << "\nIngrese un numero: ";
		cin >> a;
		cout << "Ingrese otro numero: ";
		cin >> b;
	}
	if (a < b) {
		int newa = b;
		int newb= a;
		int cos = newa / newb;
		int res = newa % newb;
		cout << "\nEl cociente es: " << cos << endl;
		cout << "\nEl residuo es : " << res << endl;
	}
	else {
		int c = a / b;
		int r = a % b;
		cout << "\nEl cociente es: " << c << endl;
		cout << "\nEl residuo es : " << r << endl;
	}
	
}

