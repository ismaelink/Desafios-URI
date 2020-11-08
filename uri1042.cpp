#include <iostream>

using namespace std;


void sort(int *res);

void print(int *vet);

int main() {

	int input[3], result[3];
	cin >> input[0];
	cin >> input[1];
	cin >> input[2];

	result[0] = input[0];
	result[1] = input[1];
	result[2] = input[2];

	sort(result);

	print(result);
	cout << endl;
	print(input);

	return 0;
}

void sort(int *res) {

	int menor, pos, aux;

	for(int i = 0; i < 3; i++) {
	
		menor = res[i];
		pos = i;

		for(int j = i; j < 3; j++) {
		
			if(menor > res[j]) {

				menor = res[j];
			       	pos = j;	
			}
			
		}
		aux = res[i];
	       	res[i] = menor;
		res[pos] = aux;	
	}
}

void print(int *vet) {

	for(int i = 0; i < 3; i++)
		cout << vet[i] << endl;
}
