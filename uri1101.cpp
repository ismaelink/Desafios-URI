#include <iostream>
#include <list>

using namespace std;


struct Numeros{

	int x, y;

	void insere() {
	
		cin >> x >> y;
	}
};

	void imprime(list<Numeros> l);

int main() {

	list<Numeros> numeros;
	
	Numeros mn;
	mn.insere();

	while(mn.x > 0 && mn.y > 0) {
	
		numeros.push_back(mn);
		mn.insere();
	}

	imprime(numeros);

	return 0;
}

void imprime(list<Numeros> l) {

	int maior, menor, soma;

	for(Numeros mn: l) {
	
		soma = 0;
		maior = (mn.x > mn.y) ? mn.x : mn.y;
       		menor = (mn.x > mn.y) ? mn.y : mn.x;

		for(int i = menor; i <= maior; i++) {
		
			cout << i << " ";
			soma += i;
		}

		cout << "Sum=" << soma << endl;
	}
}
