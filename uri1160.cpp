#include <iostream>

using namespace std;


void resposta(int t);

int main() {

	int t;
	cin >> t;

	resposta(t);

	return 0;
}

void resposta(int t) {

	int pa, pb, convert_ga, convert_gb, anos;
	double ga, gb;

	for(int i = 0; i < t; i++) {
	
		cin >> pa >> pb;
		cin >> ga >> gb;

		anos = 0;

		while(pa <= pb && anos <= 100) {
		
			convert_ga = (pa * ga) / 100;
                	convert_gb = (pb * gb) / 100;

			pa += convert_ga;
			pb += convert_gb;
			anos++;
		}

		if(anos <= 100)
			cout << anos << " anos." << endl;
		else
			cout << "Mais de 1 seculo." << endl;
	}
}
