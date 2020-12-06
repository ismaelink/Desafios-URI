#include <iostream>
#include <list>

using namespace std;


struct Valores {

	int x, y;

	void insere() {
	
		cin >> x >> y;
	}
};

void resultado(list<Valores> l);

int main() {

	list<Valores> valores;

	Valores v;
	v.insere();

	while(v.x != v.y) {
	
	
		valores.push_back(v);
		v.insere();
	}

	resultado(valores);

	return 0;
}

void resultado(list<Valores> l) {

	for(Valores v: l) {
	
		if(v.x < v.y) 
			cout << "Crescente" << endl;
		else
			cout << "Decrescente" << endl;
	}
}
