#include <iostream>
#include <list>

using namespace std;


struct Gols {

	int inter, gremio;
};

void resultado(list<Gols> l);

int main() {

	int continuar = 1;
	
	list<Gols> gols;
	Gols g;

	while(continuar != 2) {
	
		if(continuar == 1) {
		
			cin >> g.inter >> g.gremio;
			gols.push_back(g);
		}

	
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> continuar;
	}

	resultado(gols);

	return 0;
}

void resultado(list<Gols> l) {

	int quant_grenais = l.size();
	int vitorias_inter = 0,
	    vitorias_gremio = 0,
	    empates = 0;

	for(Gols g: l) {
	
		if(g.inter == g.gremio)
			empates++;
		else if(g.inter > g.gremio)
			vitorias_inter++;
		else
			vitorias_gremio++;
	}

	cout << quant_grenais << " grenais" << endl;
	cout << "Inter:" << vitorias_inter << endl;
	cout << "Gremio:" << vitorias_gremio << endl;
	cout << "Empates:" << empates << endl;
	
	if(vitorias_inter == vitorias_gremio)
		cout << "Nao houve vencedor" << endl;
	else if(vitorias_inter > vitorias_gremio)
		cout << "Inter venceu mais" << endl;
	else
		cout << "Gremio venceu mais" << endl;
}
