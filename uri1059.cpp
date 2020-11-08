#include <iostream>

using namespace std;


void n_par();

int main() {

	n_par();

	return 0;
}

void n_par() {

	for(int i = 1; i <= 100; i++)
		if(i % 2 == 0) cout << i << endl;
	
}
