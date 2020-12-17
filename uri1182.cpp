#include <iostream>
#include <iomanip>

using namespace std;


double result(double m[][12], int c, char t);

int main() {

	double m[12][12];
	int c;
	cin >> c;

	char t;
	cin >> t;

	for(int i = 0; i < 12; i++) {
	
		for(int j = 0; j < 12; j++)
			cin >> m[i][j];
	}

	cout << fixed << setprecision(1) << result(m, c, t) << endl;

	return 0;
}

double result(double m[][12], int c, char t) {

	double soma = 0.0;

	for(int i = 0; i < 12; i++) soma += m[i][c];


	return (t == 'S') ? soma : soma / 12.0;
}
