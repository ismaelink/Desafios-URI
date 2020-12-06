#include <iostream>
#include <cmath>

using namespace std;


void resultado(int n);

int main() {

	int n;
	cin >> n;

	resultado(n);

	return 0;
}

void resultado(int n) {

	for(int i = 1; i <= n; i++)
		cout << i << " " << pow(i, 2) << " " << pow(i, 3) << endl;
	
}
