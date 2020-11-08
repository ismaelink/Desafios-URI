#include <iostream>

using namespace std;


void cont(int dia_i, int hora_i, int min_i, int seg_i, int dia_f, int hora_f, int min_f, int seg_f);

struct Dados {

	string nomeD1, nomeD2;
	int dia_i, hora_i, min_i, seg_i, dia_f, hora_f, min_f, seg_f;
	char c1, c2, c3, c4;

	void input() {
	
		cin >> nomeD1;
		cin >> dia_i;
		cin >> hora_i;
		cin >> c1;
		cin >> min_i;
		cin >> c2;
		cin >> seg_i;

		cin >> nomeD2;
                cin >> dia_f;
                cin >> hora_f;
                cin >> c3;
                cin >> min_f;
                cin >> c4;
                cin >> seg_f;
	}
};

int main() {

	Dados d;

	d.input();

	cont(d.dia_i, d.hora_i, d.min_i, d.seg_i, d.dia_f, d.hora_f, d.min_f, d.seg_f);

	return 0;
}

void cont(int dia_i, int hora_i, int min_i, int seg_i, int dia_f, int hora_f, int min_f, int seg_f) {

	int cont_d = 0,
	    cont_h = 0,
	    cont_m = 0,
	    cont_s = 0;

	
	cont_d = (dia_f - dia_i > 0) ? dia_f - dia_i - 1 : 0;

	if(dia_f > dia_i && hora_f >= hora_i && !(hora_f == hora_i && min_f <= min_i && !(min_f == min_i && seg_f <= seg_i))) cont_d++;

	if(dia_f > dia_i && hora_f <= hora_i && !(hora_f == hora_i && min_f >= min_i && !(min_f == min_i && seg_f > seg_i))) hora_f += 24;

	if((dia_f > dia_i || hora_f > hora_i) && (min_f < min_i || seg_f < seg_i)) {

		hora_f--;
		min_f += 60;
	}
	
	if(seg_f < seg_i) {
	
		min_f--;
		seg_f += 60;
	}

	cont_h = hora_f - hora_i;
	cont_m = min_f - min_i;
	cont_s = seg_f - seg_i;

	if(cont_s >= 60) {
	
		cont_s -= 60;
		cont_m++;
	}

	if(cont_m >= 60) {
	
		cont_m -= 60;
		cont_h++;
	}

	if(cont_h >= 24) {
	
		cont_h -= 24;
		cont_d++;
	}

	cout << cont_d << " dia(s)" << endl;
	cout << cont_h << " hora(s)" << endl;
	cout << cont_m << " minuto(s)" << endl;
	cout << cont_s << " segundo(s)" << endl;
}
