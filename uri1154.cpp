#include <iostream>
#include <iomanip>

using namespace std;


int main() {

	float soma_idade;
	int idade, quant;

	soma_idade = 0.0;
	quant = 0;

	cin >> idade;

	while(idade >= 0) {
	
		soma_idade += idade;
		quant++;

		cin >> idade;		
	}

	cout << fixed << setprecision(2) << ((quant > 0) ? soma_idade / quant : 0.0) << endl;

	return 0;
}
