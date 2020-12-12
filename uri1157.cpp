#include <iostream>

using namespace std;


void divisores(int n);

int main() {

	int n;
	cin >> n;

	divisores(n);

	return 0;
}

void divisores(int n) {

	for(int i = 1; i <= n; i++)
		if(n % i == 0) cout << i << endl;

}
