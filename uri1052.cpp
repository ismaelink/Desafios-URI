#include <iostream>

using namespace std;


string mes(int n);

int main() {

	int n;
	cin >> n;

	cout << mes(n) << endl;

	return 0;
}

string mes(int n) {

	string meses[] {
                        "January",
                        "February",
                        "March",
                        "April",
                        "May",
                        "June",
                        "July",
                        "August",
                        "September",
                        "October",
                        "November",
                        "December"
        };

	return meses[n - 1];
}
