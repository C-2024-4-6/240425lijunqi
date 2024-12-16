#include <iostream>
#include <iomanip>
#include "БъЭЗ.h"
using namespace std;
int main()
{
    cout << fixed << setprecision(2);
        for (double celsius = 40.0; celsius >= 31.0; celsius -= 1.0) {
            double fahrenheit = cel(celsius);
            for (double f = 120.0; f >= 30.0; f -= 10.0) {
                double c = fah(f);
                cout << celsius << "\t" << fahrenheit << "\t\t|\t" << f << "\t\t" << c << "\n";
            }
        }
        return 0;
}
double cel(double cel) {
    return cel * 9.0 / 5.0 + 32;
}
double fah(double fah) {
    return (fah - 32) * 5.0 / 9.0;
}