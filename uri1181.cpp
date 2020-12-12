#include <iostream>
#include <iomanip>

using namespace std;


double result(double m[][12], int l, char op);

int main() {

	double m[12][12];
	int l;
	char op;

	cin >> l;
	cin >> op;

	for(int i = 0; i < 12; i++) {
	
		for(int j = 0; j < 12; j++) {
		
			cin >> m[i][j];
		}
	}

	cout << fixed << setprecision(1) << result(m, l, op) << endl;

	return 0;
}

double result(double m[][12], int l, char op) {

	double soma, media;

	soma = 0.0;
	media = 0.0;

	for(int j = 0; j < 12; j++) soma += m[l][j];


	return (op == 'S') ? soma : soma / 12.0;
}
