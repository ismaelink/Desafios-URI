#include <iostream>

using namespace std;


int fatorial(unsigned int n);

int main() {

	unsigned int n;
	cin >> n;

	cout << fatorial(n) << endl;

	return 0;
}

int fatorial(unsigned int n) {

	if(n == 0 || n == 1)
		return 1;

	return n * fatorial(n - 1);
}
