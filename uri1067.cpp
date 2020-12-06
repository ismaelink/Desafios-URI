#include <iostream>

using namespace std;


void print_impares(int x);

int main() {

	unsigned int x;
	cin >> x;

	print_impares(x);

	return 0;
}

void print_impares(int x) {

	for(int i = 1; i <= x; i++) 
		if(i % 2 != 0) cout << i << endl;

}
