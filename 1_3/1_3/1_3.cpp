#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;
 int main() {
	int n, k, m, p = 0, o = 0;
	cin >> n;
	vector <int> a(n);

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] % 2 == 0) {
			
			p++;
		}
		else if (a[i] % 2 != 0) {
			
			o++;
		}
	}
	
	vector <int> c(o);
	o = 0;
	vector <int> b(p);
	p = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			b[p] = a[i];
			p++;
		}
		else if (a[i] % 2 != 0) {
			c[o] = a[i];
			o++;
		}
	}

	for (int i = 0; i < o - 1; i++) {
		for (int j = 0; j < o - 1; j++) {
			if (c[j] < c[j + 1]) {
				k = c[j];
				c[j] = c[j + 1];
				c[j + 1] = k;
			}
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

	for (int i = 0; i < p; i++) {
		cout << c[i] << " ";
	}
}