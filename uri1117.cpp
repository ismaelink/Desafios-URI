#include <iostream>
#include <iomanip>
#include <list>

using namespace std;


void resultado(list<float> l);

int main() {

	list<float> notas;
	
	int valido = 2;
        float nota = 0.0;

        while(valido != 0) {

                cin >> nota;
                notas.push_back(nota);

                if(0 <= nota && nota <= 10) valido--;
        }
	
	resultado(notas);

	return 0;
}

void resultado(list<float> l) {

	float soma = 0.0;

	for(float nota: l) {
	
		if(0 <= nota && nota <= 10) 
			soma += nota;
		else 
			cout << "nota invalida" << endl;
	}
	cout << "media = " << fixed << setprecision(2) << (soma / 2) << endl;
}
