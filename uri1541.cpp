#include <iostream>
#include <cmath>

using namespace std;


int tam_terreno(int a, int b, int c);

int main() {

	int a, b, c;

	while(cin >> a && a != 0 && cin >> b && b != 0 && cin >> c && c != 0) {
		cout << tam_terreno(a, b, c) << endl;

	}

	return 0;
}

int tam_terreno(int a, int b, int c) {

	int area, tam;

	area = a * b;

	tam = sqrt((area * 100) / c);
	
	return tam;
}
