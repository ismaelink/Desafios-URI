#include <iostream>

using namespace std;


int main() {

	int i = 1, j = 3;

	for(i = 1; i <= 9; i += 2) {
	
		for(int j2 = j + 4; j2 >= j + 2; j2--)
			cout << "I=" << i << " J=" << j2 << endl;

		j += 2;
	}	

	return 0;
}
