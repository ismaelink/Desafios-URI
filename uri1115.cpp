#include <iostream>
#include <list>

using namespace std;


struct Coordenadas{

	int x, y;

	void inserir() {
	
		cin >> x >> y;
	}
};

void resultado(list<Coordenadas> l);

int main() {

	list<Coordenadas> coord;

	Coordenadas c;
	c.inserir();

	while(c.x != 0 && c.y != 0) {
	
		coord.push_back(c);
		c.inserir();
	}

	resultado(coord);

	return 0;
}

void resultado(list<Coordenadas> l) {

	for(Coordenadas c: l) {
	
		if(c.x > 0 && c.y > 0)
			cout << "primeiro" << endl;
		else if(c.x < 0 && c.y > 0)
			cout << "segundo" << endl;
		else if(c.x < 0 && c.y < 0)
			cout << "terceiro" << endl;
		else if(c.x > 0 && c.y < 0)
			cout << "quarto" << endl;
	}
}
