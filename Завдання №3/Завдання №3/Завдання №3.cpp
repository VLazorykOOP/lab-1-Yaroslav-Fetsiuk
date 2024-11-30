#include <iostream>
#include <cmath>
using namespace std;

int main() {

    setlocale(LC_ALL, "ukr");


    double a, b;
    cout << "Введіть координати школи (a, b): ";
    cin >> a >> b;

    int n;
    cout << "Введіть кількість будинків: ";
    cin >> n;

    // Массив для координат будинків
    double x, y, total_distance = 0;

    for (int i = 0; i < n; ++i) {
        cout << "Введіть координати будинку " << i + 1 << " (x, y): ";
        cin >> x >> y;

        double distance = sqrt(pow(x - a, 2) + pow(y - b, 2));
        total_distance += distance;
    }

    double average_distance = total_distance / n;
    cout << "Середня відстань до школи: " << average_distance << " метрів." << endl;

    return 0;
}
