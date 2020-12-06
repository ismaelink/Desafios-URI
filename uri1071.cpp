#include <iostream>

using namespace std;


int soma_impares(int x, int y);

int main() {

	int x, y;
	cin >> x >> y;
	
	cout << soma_impares(x, y) << endl;			

	return 0;
}

int soma_impares(int x, int y) {

	int soma = 0;
	int menor = (x > y) ? y : x;
	int maior = (x > y) ? x : y;

	menor = ((menor + 1) % 2 != 0) ? menor + 1 : menor + 2; 

	for(int i = menor; i < maior; i += 2) soma += i;

	return soma;
}
