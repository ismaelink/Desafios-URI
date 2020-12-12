#include <iostream>

using namespace std;


void insere();

unsigned long long int fibonacci(unsigned int p);

int main() {

	insere();

	return 0;
}

void insere() {

	unsigned int f;
	int t;

	cin >> t;

	for(int i = 0; i < t; i++) {
	
		cin >> f;
		cout << "Fib(" << f << ") = " << fibonacci(f) << endl;
	}
}

unsigned long long int fibonacci(unsigned int p) {

	unsigned long long int a, b, f;

	a = 1;
	b = 0;
	f = 0;

	for(int i = 0; i < p; i++) {
	
		f = a + b;
		a = b;
		b = f;
	}

	return f;
}
