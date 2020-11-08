#include <iostream>
#include <cmath>

using namespace std;


int main() {

	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	int maior_ab = (a + b + abs(a - b)) / 2;
	int maior_abc = (maior_ab + c + abs(maior_ab  - c)) / 2;
	cout << maior_abc << " eh o maior" << endl;

	return 0;
}
