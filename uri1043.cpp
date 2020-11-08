#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double a = 0, b = 0, c = 0;

bool ehTriangulo();

int main() {

	cin >> a;
	cin >> b;
	cin >> c;

	if(ehTriangulo())
		cout << "Perimetro = " << fixed << setprecision(1) << (a + b + c) << endl;
	else
		cout << "Area = " << fixed << setprecision(1) << (((a + b) * c) / 2) << endl;

	return 0;
}

bool ehTriangulo() {

	return (abs(b - c) < a && a < b + c) || (abs(a - c) < b && b < a + c) || (abs(a - b) < c && c < a + b) ? true : false;
}
