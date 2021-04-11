#include <iostream>
#include<cmath>

using namespace std;


double funkcja(double x) {
	double wynik=3 * x + sin(x) - exp(x);
	return wynik;
};

double pochodna(double x) {
	double wynik=3 + cos(x) - exp(x);
	return wynik;
}

double x0 = 0;
double x1 = 1;
double eps = 1.0e-7;

int main() {
	do {
		x0 = x1;
		x1 = x0 - funkcja(x0) / pochodna(x0);
	} while (abs(x1 - x0) >= eps);
}