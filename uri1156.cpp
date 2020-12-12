#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main() {

	double s = 0.0;
	int pot = 0;

	for(int i = 1; i <= 39; i += 2) 
		s += (i / pow(2, pot++));

	cout << fixed << setprecision(2) << s << endl;

	return 0;
}
