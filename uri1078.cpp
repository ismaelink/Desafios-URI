#include <iostream>

using namespace std;


void tabuada_n(int n);

int main() {

	int n;
	cin >> n;

	tabuada_n(n);

	return 0;
}

void tabuada_n(int n) {

	for(int i = 1; i <= 10; i++) 
		cout << i << " x " << n << " = " << i * n << endl; 
}
