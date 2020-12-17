#include <iostream>

using namespace std;


void result(int n);

int main() {

	int n;

	while(cin >> n)
		result(n);	

	return 0;
}

void result(int n) {

	int m[n][n];
	
	for(int i = 0; i < n; i++) {
	
		for(int j = 0; j < n; j++) {
		
			if(i + j == n - 1)
				m[i][j] = 2;
			else if(i == j)
				m[i][j] = 1;
			else
				m[i][j] = 3;

		}
	}

	for(int i = 0; i < n; i++) {
	
		for(int j = 0; j < n; j++) 
			cout << m[i][j];
			
		cout << endl;
	}
} 
