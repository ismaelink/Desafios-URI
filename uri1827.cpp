#include <iostream>

using namespace std;


int main() {

	int n;

	while(cin >> n) {
	
		for(int i = 0; i < n; i++) {
		
			for(int j = 0; j < n; j++) {
			
				if(i == n / 2 && j == n / 2)
					cout << 4;
				else if((n / 3 <= i && i < n - n / 3) && (n / 3 <= j && j < n - n / 3))
					cout << 1;
				else if(i == j)
					cout << 2;
				else if(i + j == n - 1)
					cout << 3;
				else
					cout << 0;
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}
