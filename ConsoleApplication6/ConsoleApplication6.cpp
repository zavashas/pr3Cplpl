#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int rows = 3, columns = 5;
    double numbers[rows][columns];

    // Цикл для ввода
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> numbers[i][j];
        }
    }
    cout << endl;

    // Цикл для вывода 
    for (int i = 0; i < rows; i++)
    {
        double sum = 0;
        for (int j = 0; j < columns; j++)
        {
            cout << numbers[i][j] << "\t";
            sum += numbers[i][j];
        }
        double mean = sum / columns;
        cout << "Среднее: "  << mean << endl;
    }

    return 0;
}


