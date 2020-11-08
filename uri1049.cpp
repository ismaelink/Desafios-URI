#include <iostream>

using namespace std;


string animal(string filo, string classe, string tipo_consum);

int main() {
	
	string filo, classe, tipo_consum;
	cin >> filo;
	cin >> classe;
	cin >> tipo_consum;

	cout << animal(filo, classe, tipo_consum) << endl;

	return 0;
}

string animal(string filo, string classe, string tipo_consum) {

	if(filo == "vertebrado") {
	
		if(classe == "ave") {
		
			if(tipo_consum == "carnivoro")
				return "aguia";
			else
				return "pomba";
		}
		else {
		
			if(tipo_consum == "onivoro")
				return "homem";
			else
				return "vaca";
		}
	}
	else {
	
		if(classe == "inseto") {
		
			if(tipo_consum == "hematofago")
				return "pulga";
			else
				return "lagarta";
		}
		else {
		
			if(tipo_consum == "hematofago")
				return "sanguessuga";
			else
				return "minhoca";
		}
	}
} 
