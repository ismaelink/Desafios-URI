#include <iostream>

using namespace std;


void iniciar();

void imprimir(int *vetor);

void imprimir(int *vetor1, int cont_v1, int *vetor2, int cont_v2);

int main() {

	iniciar();

	return 0;
}

void iniciar() {

	int par[5], impar[5];
	int cont_par, cont_impar;
	int valor;

	cont_par = 0;
	cont_impar = 0;

	for(int i = 0; i < 15; i++) {
	
		cin >> valor;

		if(valor % 2 == 0) {
			
			par[cont_par++] = valor;

			if(cont_par == 5) {
				
				imprimir(par);
				cont_par = 0;
			}
		}
		else {
		
			impar[cont_impar++] = valor;

			if(cont_impar == 5) {
			
				imprimir(impar);
				cont_impar = 0;
			}
		}
	}

	imprimir(par, cont_par, impar, cont_impar);
}

void imprimir(int *vetor) {

	string par_impar = (vetor[0] % 2 == 0) ? "par" : "impar";

	for(int i = 0; i < 5; i++) 
		cout << par_impar << "[" << i << "] = " << vetor[i] << endl;
	
}

void imprimir(int *vetor1, int cont_v1, int *vetor2, int cont_v2) {

	for(int i = 0; i < cont_v2; i++)
                cout << "impar[" << i << "] = " << vetor2[i] << endl;

	for(int i = 0; i < cont_v1; i++)
		cout << "par[" << i << "] = " << vetor1[i] << endl;
}
