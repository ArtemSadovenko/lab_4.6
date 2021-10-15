#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int k;
	double d2;


	double d1 = 1.0;
	int i = 1;
	while (i <= 15) {
		d2 = 1.0;
		k = i;
		while (k <= 30 - i) {
			d2 *= (sin(i * k * k) + cos(i * i * k)) / (k * k + i * i);
			k++;
		}
		d1 *= d2;
		i++;
	}
	cout << d1 << endl;

	d1 = 1.0;
	i = 1;
	do {
		d2 = 1.0;
		k = i;
		do {

			d2 *= (sin(i * k * k) + cos(i * i * k)) / (k * k + i * i);
			k++;
		} while (k <= 30 - i);
		d1 *= d2;
		i++;
	} while (i <= 15);

	cout << d1 << endl;

	d1 = 1.0;
	for (int i = 1; i <= 15; i++) {
		d2 = 1.0;
		for (int k = i; k <= 30 - i; k++) {
			d2 *= (sin(i * k * k) + cos(i * i * k)) / (k * k + i * i);
		}
		d1 *= d2;
	}

	cout << d1 << endl;


	d1 = 1.0;
	for (int i = 15; i >= 1; i--) {
		d2 = 1.0;
		for (int k = 30 - i; k >= i; k--) {
			d2 *= (sin(i * k * k) + cos(i * i * k)) / (k * k + i * i);
		}
		d1 *= d2;
	}
	cout << d1 << endl;


	return 0;

}