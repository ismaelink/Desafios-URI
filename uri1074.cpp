#include <iostream>

using namespace std;


void tipo(int n, int *x);

int main() {

	int n;
	cin >> n;
	int x[n];

	for(int i = 0; i < n; i++) cin >> x[i];

	tipo(n, x);

	return 0;
}

void tipo(int n, int *x) {

	for(int i = 0; i < n; i++) {
	
		if(x[i] == 0) 
			cout << "NULL";
		else {
		
			if(x[i] % 2 == 0) cout << "EVEN";
			else cout << "ODD";

			if(x[i] > 0) cout << " POSITIVE";
			else cout << " NEGATIVE";
		}
		
		cout << endl;
	}	
}
