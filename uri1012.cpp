#include <iostream>
#include <iomanip>

using namespace std;


int main() {

	double a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	double area_trian = (a * c) / 2;
	double area_circ = 3.14159 * (c * c);
	double area_trap = (a + b) * c / 2;
	double area_quad = b * b;
	double area_retan = a * b;
	
	cout << "TRIANGULO: " << fixed << setprecision(3) << area_trian << endl;
	cout << "CIRCULO: " << fixed << setprecision(3) << area_circ << endl;
	cout << "TRAPEZIO: " << fixed << setprecision(3) << area_trap << endl;
	cout << "QUADRADO: " << fixed << setprecision(3) << area_quad << endl;
	cout << "RETANGULO: " << fixed << setprecision(3) << area_retan << endl;

	return 0;
}
