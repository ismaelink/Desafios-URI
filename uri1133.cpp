#include <iostream>

using namespace std;


void resultado(int x, int y);

int main() {

	int x, y;
	cin >> x >> y;

	resultado(x, y);

	return 0;
}

void resultado(int x, int y) {

	int maior = (x > y) ? x : y;
	int menor = (x > y) ? y : x;

	for(int i = menor + 1; i < maior; i++) {
	
		if(i % 5 == 2 || i % 5 == 3)
			cout << i << endl;
	}
}
