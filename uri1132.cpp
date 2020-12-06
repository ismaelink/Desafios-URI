#include <iostream>

using namespace std;


int nao_multiplos(int x, int y, int n);

int main() {

	int x, y;
	cin >> x >> y;

	cout << nao_multiplos(x, y, 13) << endl;

	return 0;
}

int nao_multiplos(int x, int y, int n) {

	int soma = 0;
	int maior = (x > y) ? x : y;
	int menor = (x > y) ? y : x;

	for(int i = menor; i <= maior; i++)
		if(i % 13 != 0) soma += i;

	return soma;	
}
