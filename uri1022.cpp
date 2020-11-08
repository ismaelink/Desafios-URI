#include <iostream>
#include <cmath>

using namespace std;


int expressao1[2], expressao2[2];

void somaSub(int n1, int d1, int n2, int d2, char op) {

	if(op == '+') expressao1[0] = n1 * d2 + n2 * d1;

	else if(op == '-') expressao1[0] = n1 * d2 - n2 * d1;

	expressao1[1] = d1 * d2;
}

void multDiv(int n1, int d1, int n2, int d2, char op) {

	if(op == '*') {
	       	
		expressao1[0] = n1 * n2;
		expressao1[1] = d1 * d2;
	}

	else if(op == '/') {
		
		expressao1[0] = n1 * d2;
		expressao1[1] = n2 * d1;
	}
}

int menor(int n1, int n2) {

        int num;

        if(n1 > n2) 
                num = abs(n2);
        else
                num = abs(n1);


        return num;
}

int mdc(int expressao[2]) {

	int m = menor(expressao[0], expressao[1]);
	int resultado = 0;

	for(int i = 2; i <= m; i++) {
	
		if(expressao[0] % i == 0 && expressao[1] % i == 0)
			resultado = i;

	}

	return resultado;
}


int main() {

	int n;
	cin >> n;

	int n1[n], d1[n], n2[n], d2[n];
	char op1[n], op2[n], op3[n];

	for(int i = 0; i < n; i++) {

		cin >> n1[i];
		cin >> op1[i];
		cin >> d1[i];
		cin >> op2[i];
		cin >> n2[i];
		cin >> op3[i];
		cin >> d2[i];
	}

	for(int i = 0; i < n; i++) {

		if(op2[i] == '+' || op2[i] == '-') somaSub(n1[i], d1[i], n2[i], d2[i], op2[i]);

		else if(op2[i] == '*' || op2[i] == '/') multDiv(n1[i], d1[i], n2[i], d2[i], op2[i]);

		int m = mdc(expressao1);

		expressao2[0] = m != 0 ? expressao1[0] / m : expressao1[0];
		expressao2[1] = m != 0 ? expressao1[1] / m : expressao1[1];

		cout << expressao1[0] << "/" << expressao1[1] << " = " << expressao2[0] << "/" << expressao2[1] << endl;
	}

	return 0;
}
