#include <iostream>
#include <list>

using namespace std;


void resultado(list<int> l);

int main() {

	int escolha;
	cin >> escolha;

	list<int> tipos;

	while(escolha != 4) {
	
		if(1 <= escolha && escolha <= 4)
			tipos.push_back(escolha);

		cin >> escolha;
	}

	resultado(tipos);

	return 0;
}

void resultado(list<int> l) {

	int alcool = 0,
	    gasolina = 0,
	    diesel = 0;

	for(int tipo: l) {
	
		switch(tipo) {
		
			case 1:
				alcool++;
				break;
			case 2:
				gasolina++;
				break;
			case 3:
				diesel++;
				break;
			default:
				break;
		}
	}

	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << alcool << endl;
	cout << "Gasolina: " << gasolina << endl;
	cout << "Diesel: " << diesel << endl; 
}
