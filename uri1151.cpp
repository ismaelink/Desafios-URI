#include <iostream>

using namespace std;


void fibonacci(int n);

int main() {

	unsigned long long n;
	cin >> n;

	fibonacci(n);

	return 0;
}

void fibonacci(int n) {

	int a, b, f;

	a = 0;
	b = 1;
	f = 0;

	for(int i = 0; i < n; i++) {
	
		if(i == n - 1) 
			cout << f << endl;
		else
			cout << f << " ";

		a = b;
		b = f;
		f = a + b;
	}
}
