#include <iostream>

using namespace std;


void resto2(int n);

int main() {

	int n;
	cin >> n;

	resto2(n);

	return 0;
}

void resto2(int n) {

	for(int i = 2; i < 10000; i++) 
		if(i % n == 2) cout << i << endl;	
}
