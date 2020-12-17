#include <iostream>
#include <cmath>

using namespace std;


void result(int n);

int main() {

	int n = 1;

	while(n > 0) {
		cin >> n;

		result(n);
		
		if(n > 0) cout << endl;
	}

	return 0;
}

void result(int n) {

	int mat[n][n];

	int e, indice_i, indice_j, aux;
	
	e = 1;
	indice_i = 0;
	indice_j = n - 1;
	aux = n;

	while(aux > 0) {

		for(int i = indice_i; i <= indice_j; i++) {
		
			for(int j = indice_i; j <= indice_j; j++) {
			
				mat[i][j] = e;
			}
		}

		e++;
		indice_i++;
		indice_j--;

		aux -= 2;
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
			else
				cout << "  " << mat[i][j] << endl;
		}
	}

}
