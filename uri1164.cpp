#include <iostream>

using namespace std;


void ehNumPerfeito(int x);

int main() {

	int n, x;
	cin >> n;

	for(int i = 0; i < n; i++) {
		
		cin >> x;
		ehNumPerfeito(x);
	}

	return 0;
}

void ehNumPerfeito(int x) {

	unsigned long nPerfeitos[8] {6, 28, 496, 8128, 33550336, 8589869056, 137438691328, 2305843008139952128};

	for(unsigned long v: nPerfeitos) {
	
		if(x == v) {
		
			cout << x << " eh perfeito" << endl;
			return;
		}
	}

	cout << x << " nao eh perfeito" << endl;
}
