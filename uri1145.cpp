#include <iostream>

using namespace std;


void resposta(int x, int y);

int main() {

	int x, y;
	cin >> x >> y;

	resposta(x, y);

	return 0;
}

void resposta(int x, int y) {

	for(int i = 1; i <= y; i += x) {
	
		for(int j = i; j <= (i + x - 1 > y ? y : i + x - 1); j++) {

			if(j == i + x - 1) 
				cout << j << endl;
			else 
				cout << j << " ";
		}


	}
}
