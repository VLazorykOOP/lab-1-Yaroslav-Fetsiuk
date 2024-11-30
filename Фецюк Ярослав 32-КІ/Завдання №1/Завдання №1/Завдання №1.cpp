#include <iostream>
#include <ctime>

using namespace std;

int main() {

    setlocale(LC_ALL, "ukr");
    srand(time(NULL));

    int N;
    cout << "Введіть розмір масиву A(максимальне значення 100): ";
    cin >> N;

    int A[100];

    for (int i = 0; i < N; i++)
    {
        A[i] = rand() % 20 - 10;
    }

    cout << "Елементи масиву: " << endl << endl;

    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl << endl;

    cout << "Масив без від'ємних елементів: " << endl << endl;

    int size = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] >= 0)
        {
            size++;
        }
    }

    int B[100];
    int el = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] >= 0) {
            B[el++] = A[i];
        }
    }

    for (int i = 0; i < el; i++)
    {
        cout << B[i] << " ";
    }

    cout << endl;

    return 0;
}
