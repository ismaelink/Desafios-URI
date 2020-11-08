#include <iostream>

using namespace std;

void tipo(double *abc);

void sort(double *vet);

int main() {

	double abc[3];
	cin >> abc[0];
	cin >> abc[1];
	cin >> abc[2];

	sort(abc);
	
	tipo(abc);
	
	return 0;
}

void tipo(double *vet) {

	if(vet[0] >= vet[1] + vet[2]) {

		cout << "NAO FORMA TRIANGULO" << endl;
		return;
	}

	if(vet[0] * vet[0] == vet[1] * vet[1] + vet[2] * vet[2])
		cout << "TRIANGULO RETANGULO" << endl;

	if(vet[0] * vet[0] > vet[1] * vet[1] + vet[2] * vet[2])
		cout << "TRIANGULO OBTUSANGULO" << endl;

	if(vet[0] * vet[0] < vet[1] * vet[1] + vet[2] * vet[2])
		cout << "TRIANGULO ACUTANGULO" << endl;

	if(vet[0] == vet[1] && vet[1] == vet[2])
		cout << "TRIANGULO EQUILATERO" << endl;

	if((vet[0] == vet[1] && vet[0] != vet[2]) || (vet[0] == vet[2] && vet[0] != vet[1]) || (vet[1] == vet[2] && vet[1] != vet[0]))
		cout << "TRIANGULO ISOSCELES" << endl;
}

void sort(double *vet) {

	double maior, aux;
	int pos;

	for(int i = 0; i < 3; i++) {
	
		maior = vet[i];
		pos = i;
		for(int j = i; j < 3; j++) {
		
			if(maior < vet[j]) {
			
				maior = vet[j];
				pos = j;
			}
		}
		aux = vet[i];
		vet[i] = maior;
		vet[pos] = aux;
	}
}
