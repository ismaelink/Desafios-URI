#include <iostream>
#include <iomanip>

using namespace std;


void insere(float *a);

void resposta(float *a);

int main() {

	float a[100];

	insere(a);
	resposta(a);

	return 0;
}

void insere(float *a) {

	for(int i = 0; i < 100; i++) cin >> a[i];
}

void resposta(float *a) {

	for(int i = 0; i < 100; i++) {
	
		if(a[i] <= 10)
			cout << "A[" << i << "] = " << fixed << setprecision(1) << a[i] << endl;
	}
}
