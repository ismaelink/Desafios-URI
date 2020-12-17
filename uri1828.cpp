#include <iostream>

using namespace std;


string result(string valor1, string valor2);

int main() {

	string sheldon, raj;
	int t, cont;

	cin >> t;
	cont = 0;

	while(t-- > 0) {
	
		cin >> sheldon >> raj;

		cout << "Caso #" << ++cont << ": " << result(sheldon, raj) << endl;
	}

	return 0;
}

string result(string valor1, string valor2) {

	if(valor1 == valor2)
		return "De novo!";
	
	
	string pos[10][2] {
		{"tesoura", "papel"},
		{"papel", "pedra"},
		{"pedra", "lagarto"},
		{"lagarto", "Spock"},
		{"Spock", "tesoura"},
		{"tesoura", "lagarto"},
		{"lagarto", "papel"},
		{"papel", "Spock"},
		{"Spock", "pedra"},
		{"pedra", "tesoura"}
	};

	string r;

	for(int i = 0; i < 10; i++) {
	
		if(valor1 == pos[i][0] && valor2 == pos[i][1]) {
		
			r = "Bazinga!";
			break;
		}

		if(valor2 == pos[i][0] && valor1 == pos[i][1]) {
		
			r = "Raj trapaceou!";
			break;
		}

		
	}

	return r;
} 
