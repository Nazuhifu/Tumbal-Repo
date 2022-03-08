#include<bits/stdc++.h>

using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		int x;
		cin >> x;
		if (x == 1) {
			cout << "BUKAN" << endl;
		} else {
			bool prime = 1;
			for (int j = 2; j <= sqrt(x); j++) {
				if (x % j == 0) {
					prime = 0;
				}
			}
			if (prime) {
				cout << "YA" << endl;
			} else {
				cout << "BUKAN" << endl;
			}
		}
	}
}