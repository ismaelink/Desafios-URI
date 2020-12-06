#include <iostream>

using namespace std;


void resultado(int n);

int main() {

	int n;
	cin >> n;

	resultado(n);

	return 0;
}

void resultado(int n) {

	int limite = 3;

	for(int i = 0; i < n; i++) {
	
		for(int j = limite - 2; j <= limite; j++)
			cout << j << " ";

		cout << "PUM" << endl;
		
		limite += 4;		
	}
}
