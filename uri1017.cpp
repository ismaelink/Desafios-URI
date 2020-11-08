#include <iostream>
#include <iomanip>

using namespace std;


int main() {

	int tempo_viagem, vel_media;
	cin >> tempo_viagem;
	cin >> vel_media;

	double quant_litros = (vel_media * tempo_viagem) / 12.0;
	cout << fixed << setprecision(3) << quant_litros << endl;

	return 0;
}
