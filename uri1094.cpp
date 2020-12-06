#include <iostream>
#include <iomanip>

using namespace std;


struct Teste {

	int quantidade;
	char tipo;

	void insere() {
	
		cin >> quantidade;
		cin >> tipo;
	}
};

int total_cobaias(Teste *t, int n);

int total_coelhos(Teste* t, int n);

int total_ratos(Teste* t, int n);

int total_sapos(Teste* t, int n);

void relatorio(Teste *t, int n);

int main() {

	int n;
	cin >> n;

	Teste *testes = new Teste[n];

	for(int i = 0; i < n; i++)
		testes[i].insere();


	relatorio(testes, n);
	
	return 0;
}

int total_cobaias(Teste *t, int n) {

	int tot = 0;

	for(int i = 0; i < n; i++) 
		tot += t[i].quantidade;

	return tot;	
	
}

int total_coelhos(Teste* t, int n) {

	int tot = 0;

	for(int i = 0; i < n; i++)
		if(t[i].tipo == 'C') tot += t[i].quantidade;

	return tot;
}

int total_ratos(Teste* t, int n) {

	int tot = 0;

	for(int i = 0; i < n; i++)
		if(t[i].tipo == 'R') tot += t[i].quantidade;

	return tot;
}

int total_sapos(Teste* t, int n) {

	int tot = 0;

	for(int i = 0; i < n; i++)
		if(t[i].tipo == 'S') tot += t[i].quantidade;

	return tot;
}

void relatorio(Teste *t, int n) {

	float total = total_cobaias(t, n);
	float total_c = total_coelhos(t, n);
	float total_r = total_ratos(t, n);
	float total_s = total_sapos(t, n);

	float p_coelhos = (100.0 * total_c) / total;
	float p_ratos = (100.0 * total_r) / total;
	float p_sapos = (100.0 * total_s) / total;

	cout << "Total: " << total << " cobaias" << endl;
	cout << "Total de coelhos: " << total_c << endl;
	cout << "Total de ratos: " << total_r << endl;
	cout << "Total de sapos: " << total_s << endl;
	cout << "Percentual de coelhos: " << fixed << setprecision(2) << p_coelhos << " %" << endl;
	cout << "Percentual de ratos: " << fixed << setprecision(2) << p_ratos << " %" << endl;
	cout << "Percentual de sapos: " << fixed << setprecision(2) << p_sapos << " %" << endl;	
}
