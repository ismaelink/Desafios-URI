#include <iostream>

using namespace std;


int num_ddd[] {61, 71, 11, 21, 32, 19, 27, 31};
string cidad_ddd[] {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};

int buscar(int enp);

int main() {

	int enp, result;
	cin >> enp;

	result = buscar(enp);
	if(result == -1) 
		cout << "DDD nao cadastrado" << endl;
	else
		cout << cidad_ddd[result] << endl;

	return 0;
}

int buscar(int enp) {

	int i = 0;
	for(int v: num_ddd) {
	
		if(v == enp) {
		
			return i;
		}
		i++;
	} 
	return -1; // valor não existe
}
