#include <iostream>
#include <math.h>
#include <iomanip>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x_start = 2.0;
    double x_end = 34.0;
    double step = 4;

    double x = x_start;

    while (x <= x_end) {
        double y = log(pow(x, 4)) + pow(x, 4) + 2;
        cout << setw(10) << x << setw(20) << y << endl;
        x += step;
    }
system("pause");
    return 0;
}
