#include <iostream>

using namespace std;


void par_quadrado(int n);

int main() {

	unsigned int n;
	cin >> n;

	par_quadrado(n);

	return 0;
}

void par_quadrado(int n) {

	n = (n % 2 == 0) ? n : n - 1;

	for(unsigned int i = 2; i <= n; i += 2)
		cout << i << "^2" << " = " << i * i << endl;
}
