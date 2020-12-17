#include <iostream>

using namespace std;


int main() {

	int l, v, maior_vel;

	while(cin >> l) {
	
		cin >> v;
		maior_vel = v;

		while(l-- > 1) {
		
			cin >> v;

			if(maior_vel < v)
				maior_vel = v;

		}

		if(maior_vel < 10)
			cout << "1" << endl;
		else if(10 <= maior_vel && maior_vel < 20)
			cout << "2" << endl;
		else
			cout << "3" << endl;
	}

	return 0;
}
