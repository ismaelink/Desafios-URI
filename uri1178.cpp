#include <iostream>
#include <iomanip>

using namespace std;


void insere(double x, double *n);

void result(double *n);

int main() {

	double n[100];
	double x;
	cin >> x;

	insere(x, n);
	result(n);

	return 0;
}

void insere(double x, double *n) {

	n[0] = x;
	for(int i = 1; i < 100; i++)
		n[i] = n[i - 1] / 2.0;
	
}

void result(double *n) {

	for(int i = 0; i < 100; i++)
		cout << "N[" << i << "] = " << fixed << setprecision(4) << n[i] << endl;
}
