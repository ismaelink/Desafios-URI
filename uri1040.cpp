#include <iostream>
#include <iomanip>

using namespace std;


double media(double n1, double n2, double n3, double n4);

double media(double n1, double n2);


int main() {

	double media1, media2;
	double n1, n2, n3, n4, n_exame;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;

	media1 = media(n1, n2, n3, n4);

	cout << "Media: "<< fixed << setprecision(1) << media1 << endl;

	if(media1 >= 7.0) 
                cout << "Aluno aprovado." << endl;
        else if(media1 < 5.0) 
                cout << "Aluno reprovado." << endl;
        else {

                cout << "Aluno em exame." << endl;
		cin >> n_exame;
		cout << "Nota do exame: " << fixed << setprecision(1) << n_exame << endl;
		
		media2 = media(media1, n_exame);

		if(media2 >= 5.0)
			cout << "Aluno aprovado." << endl;
		else
			cout << "Aluno reprovado." << endl;

		cout << "Media final: "<< fixed << setprecision(1) << media2 << endl;
	}


	return 0;
}

double media(double n1, double n2, double n3, double n4) {

	return ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10;
}

double media(double n1, double n2) {

	return (n1 + n2) / 2;
}
