#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

struct Valores {

	double n[6];
	list<double> positivos;

	void input() {
	
		cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4] >> n[5];
	}

	void guarda_positivos() {
	
		for(double v: n)
			if(v > 0) positivos.push_front(v);
	}

	double media_positivos() {
	
		if(positivos.size() <= 0) guarda_positivos();

		double soma = 0.0;

		for(double v: positivos) soma += v;

		return soma / positivos.size();
	}
};

int main() {

	Valores valores;

	valores.input();
	valores.guarda_positivos();

	cout << valores.positivos.size() << " valores positivos" << endl;
	cout << fixed << setprecision(1) << valores.media_positivos() << endl;

	return 0;
}
