#include <iostream>

using namespace std;


int convert(string *acoes);

int main() {

	string acoes;

	int cont = 0;
	int soma[3] {0, 0, 0};

	while(cin >> acoes) {

		if(acoes == "caw") {
		
			cin >> acoes;
			cout << soma[cont++] << endl; 
		}
		else
			soma[cont] += convert(&acoes);
	

		if(cont == 3) break;
	}

	return 0;
}

int convert(string *acoes) {

	string tab[8] {"---", "--*", "-*-", "-**", "*--", "*-*", "**-", "***"};

	for(int i = 0; i < 8; i++) {
	
		if(tab[i] == *acoes) 
			return i;
	}

	return 0;
}
