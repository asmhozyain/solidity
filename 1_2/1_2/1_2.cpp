#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
	int n, k = 1, m, p = 0;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] % 2 != 0) {
			p++;
		}
	}

	vector <int> b(p);
	p = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			b[p] = a[i];
			p++;
		}
	}

	for (int i = 0; i < p - 1; i++) {
		for (int j = 0; j < p - 1; j++) {
			if (b[j] > b[j + 1]) {
				m = b[j];
				b[j] = b[j + 1];
				b[j + 1] = m;
			}
		}
	}

	for (int i = 0; i < p; i++) {
		cout << b[i] << " ";
	}
}