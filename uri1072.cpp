#include <iostream>

using namespace std;


void ler_valores(int n, int *x);

void intervalo_10a20(int n, int *x);

int main() {

	int n;
	cin >> n;
	int x[n];

	ler_valores(n, x);
	intervalo_10a20(n, x);

	return 0;
}

void ler_valores(int n, int *x) {
	
	for(int i = 0; i < n; i++) cin >> x[i];
}

void intervalo_10a20(int n, int *x) {

	int in = 0,
	    out = 0;

	for(int i = 0; i < n; i++) {

		if(10 <= x[i] && x[i] <= 20) in++;
		else out++;
	}

	cout << in << " in" << endl;
	cout << out << " out" << endl;
}
