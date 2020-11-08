#include <iostream>

using namespace std;

#define TAM 1000

int strLen(char s[]) {

	int i = 0;
	while(s[i] != '\0') i++;

	return i;	
}

void passo(int tam, char* palavras) {

	for(int j = 0; j < strLen(palavras); j++) {

		if((65 <= palavras[j] && palavras[j] <= 90) || (97 <= palavras[j] && palavras[j] <= 122))          
		       	palavras[j] = palavras[j] + tam;
	}
}

void regresso(char* palavras) {

	for(int i = strLen(palavras) - 1; i >= strLen(palavras) / 2; i--) 
		palavras[i] = palavras[i] - 1;
}

void palindrome(char* palavras) {

	char aux = palavras[0];

	for(int i = 0; i < strLen(palavras) / 2; i++) {
	
		palavras[i] = palavras[strLen(palavras) - i - 1];
		palavras[strLen(palavras) - i - 1] = aux;
		aux = palavras[i + 1];
	}
}

int main() {

	int n;
	cin >> n;

	char lixo[1];
	cin.getline(lixo, 1);

	char palavras[n][TAM];
	for(int i = 0; i < n; i++) {
	
		cin.getline(palavras[i], TAM);

		char* ponteiro = palavras[i];
		passo(3, ponteiro);
		palindrome(ponteiro);
		regresso(ponteiro);

		string aux = palavras[i];
		cout << aux;
	}		
	
	return 0;
}
