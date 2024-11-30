#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    setlocale(LC_ALL, "ukr");
    srand(time(NULL));

    const int SIZE = 100;
    int N, T;

    cout << "Введіть розмір масиву N (до 100): ";
    cin >> N;

    if (N > SIZE || N <= 0)
    {
        cout << "Неправильний розмір масиву!" << endl;
        return 1;
    }

    cout << "Введіть значення T: ";
    cin >> T;

    int A[SIZE];

    cout << "Масив A: ";

    for (int i = 0; i < N; i++) 
    {
        A[i] = rand() % 21 - 10;
        cout << A[i] << " ";
    }

    cout << endl;

    int max_neg_Index = -1; // індекс першого максимального від'ємного елемента
    int max_neg_Value = INT_MIN; // Максимальне від'ємне значення (INT_MIN — це макрос, що визначає найменше можливе значення для типу даних int)
    bool foundT = false;  // для перевірки наявності елемента рівного T

    for (int i = 0; i < N; i++) 
    {
        int* pA = &A[i];  // вказівник на поточний елемент масиву

        if (*pA == T) // якщо знайдений елемент рівний T
        {
            foundT = true;
            break;
        }

        if (*pA < 0 && *pA > max_neg_Value) 
        {
            max_neg_Value = *pA;
            max_neg_Index = i;
        }
    }

    if (foundT && max_neg_Index != -1) 
    {
        cout << "Індекс першого максимального від'ємного елемента: " << max_neg_Index << endl;
    }
    else {
        cout << "Від'ємний елемент не знайдено до першого елемента, рівного T" << endl;
    }

    return 0;
}
