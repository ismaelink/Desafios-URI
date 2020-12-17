#include <iostream>

using namespace std;


void result(int n);

int main() {

	int n;
	cin >> n;

	while(n > 0) {
	
		result(n);
		cout << endl;

		cin >> n;
	}

	return 0;
}

void result(int n) {

	int mat[n][n];

	for(int i = 0; i < n; i++) {
	
		for(int j = 0; j < n; j++) {
		
			if(i == j) 
				mat[i][j] = 1;
			else
				mat[i][j] = (j > i) ? j - i + 1 : i - j + 1;
		}
	}


	for(int i = 0; i < n; i++) {
	
		for(int j = 0; j < n; j++) {
		
			if(j < n - 1) {

				if(mat[i][j] < 10)
					cout << "  " << mat[i][j] << " ";
				else if(mat[i][j] < 100)
					cout << " " << mat[i][j] << " ";
				else
					cout << mat[i][j] << " ";
			}
			else {

				if(mat[i][j] < 10)
					cout << "  " << mat[i][j] << endl;
				else if(mat[i][j] < 100)
					cout << " " << mat[i][j] << endl;
				else
					cout << mat[i][j] << endl;
			}
		}
	}
}
