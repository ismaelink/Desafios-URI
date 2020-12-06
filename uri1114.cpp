#include <iostream>
#include <list>

using namespace std;


void avaliar(list<int> l);

int main() {

	list<int> senhas;

	int s;
	cin >> s;
	senhas.push_back(s);

	while(s != 2002) {
	
		cin >> s;
		senhas.push_back(s);
	}	

	avaliar(senhas);

	return 0;
}

void avaliar(list<int> l) {

	for(int v: l) {
	
		if(v != 2002) 
			cout << "Senha Invalida" << endl;
		else
			cout << "Acesso Permitido" << endl;
	}
}
