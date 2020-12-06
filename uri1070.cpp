#include <iostream>

using namespace std;


void impares_consec(int x);

int main() {

	unsigned int x;
	cin >> x;

	impares_consec(x);	

	return 0;
}

void impares_consec(int x) {

	x = (x % 2 != 0) ? x : x + 1;

	for(int i = x; i < x + 12; i += 2) cout << i << endl;			
}
