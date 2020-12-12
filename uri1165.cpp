#include <iostream>

using namespace std;


void eh_primo(int x);

int main() {

	int n, x;
	cin >> n;

	for(int i = 0; i < n; i++) {

		cin >> x;
		eh_primo(x);
	}
	return 0;
}

void eh_primo(int x) {

	int ehPrimo = 1;

	for(int i = 2; i < x; i++) {
		
		if(x % i == 0) {
		
			ehPrimo = 0;
			break;
		}
	}

	if(ehPrimo)
		cout << x << " eh primo" << endl;
	else
		cout << x << " nao eh primo" << endl;
}
