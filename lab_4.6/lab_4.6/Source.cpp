#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double i = 1.0;
	double k;
	double d1 = 1.0;
	double d2 = 1.0;

	k = i;

	while (i <= 15) {
		while (k <= 30 - i) {
			d2 *= (sin(i * k * k) + cos(i * i * k)) / (k * k + i * i);
			k++;
		}
		d1 *= d2;
		i++;
	}
	cout << d1 << endl;

	i = 1.0;
	k = i;
	d1 = 1.0;
	d2 = 1.0;



	do {
		do {
			d2 *= (sin(i * k * k) + cos(i * i * k)) / (k * k + i * i);
			k++;
		} while (k <= 30 - i);
		d1 *= d2;
		i++;
	} while (i <= 15);

	cout << d1 << endl;

	i = 1.0;
	k = i;
	d1 = 1.0;
	d2 = 1.0;

	for(i = 1.0; i <= 15; i++) {
		for (k = i; k <= 30 - i; k++) {
			d2 *= (sin(i * k * k) + cos(i * i * k)) / (k * k + i * i);
		}
		d1 *= d2;
	}

	cout << d1 << endl;

	i = 1.0;
	k = i;
	d1 = 1.0;
	d2 = 1.0;

	for(i = 15; i >= 1; i--) {
		for (k = 30 - i; k >= i; k--) {
			d2 *= (sin(i * k * k) + cos(i * i * k)) / (k * k + i * i);
		}
		d1 *= d2;
	}
	cout << d1 << endl;


	return 0;
}