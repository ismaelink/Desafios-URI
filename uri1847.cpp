#include <iostream>

using namespace std;


int main() {

	int a, b, c;

	cin >> a >> b >> c;

	if((a > b && c >= b) || (b > a && c - b >= b - a) || (a > b && b - c < a - b) || (a == b && c > b))
		cout << ":)" << endl;
	else
		cout << ":(" << endl;

	return 0;
}
