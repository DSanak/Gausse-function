//dominik sanak 055946 zadanie 1 metody numeryczne 11.10.2020
#include <iostream>
#include <cmath>
using namespace std;
//Pierwsze zadanie
double funkcja(double x)
{
    return 1.0 / 3 * cos(x);
}

//Drugie zadanie
double funkcja1(double x) {
    double wynik = 3 * x + sin(x) - exp(x);
    return wynik;
};

double pochodna(double x) {
    double wynik = 3 + cos(x) - exp(x);
    return wynik;
}

double x0 = 0;
double x1 = 1;
double eps = 1.0e-7;

int main()
{
    cout << "===============Pierwsze Zadanie=================" << endl;
    double x1 = 0.0, f0, blad = 1.0;
    const double eps = 1.0e-7;
    cout << "program ma za zadanie znalezc miejsce zerowe funkcji g(x)=cosx/3 metoda iteracji prostej \n";
    int i =1;
    do
    {
        f0 = funkcja(x1);
        blad = fabs(x1 - f0);
        cout << "po " << (i) << " iteracji x = \t" << x1 << " f(x) = \t" << f0 << endl;
        x1 = f0;
        i++;

    } while (blad >= eps);
    cout << "Wynik pierwszego zadnaia  = \t" << x1 << endl;
    // -------------------------// Drugie zadanie

    cout << "===============Drugie Zadanie=================" << endl;
    cout << " Algorytm ma za pomoca metody Newtona obliczyc pierwiastek z funkcji 3x+sinx-e^x=0" << endl;
    int j = 1;
    do {
        x0 = x1;
        x1 = x0 - funkcja1(x0) / pochodna(x0);
        cout << "Po " << j << " iteracji x= \t" << x0 << endl;
        j++;
    } while (abs(x1 - x0) >= eps);
    cout << "Wynik drugiego zadnaia= " << x0 << endl;


}




