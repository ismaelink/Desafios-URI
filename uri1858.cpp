#include <iostream>

using namespace std;


int main() {

	int n, i, menor_n;
	cin >> n;

	int t[n];
	for(i = 0; i < n; i++) cin >> t[i];

	menor_n = 0;
	for(i = 1; i < n; i++) {
			
		if(t[menor_n] > t[i])
			menor_n = i;
	}

	cout << ++menor_n << endl;

	return 0;
}
