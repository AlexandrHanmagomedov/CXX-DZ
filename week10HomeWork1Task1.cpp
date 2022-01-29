/*
Задание 1. Напишите программу, которая создает двух-
мерный массив и заполняет его по следующему принципу:
пользователь вводит число (например, 3) первый элемент
массива принимает значение этого числа, последую-
щий элемент массива принимает значение этого числа
умноженного на 2 (т.е. 6 для нашего примера), третий
элемент массива предыдущий элемент умноженный на
2 (т.е. 6*2=12 для нашего примера). Созданный массив
вывести на экран.
*/
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{

    const int numRows = 3;
    const int numCols = 3;
    int arr[numRows][numCols] = { 0 };

    cout << "\nVvedite na4alo massiva  \n\n";
    int n;
    cin >> n;
    cout << "\n";

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            arr[i][j] = n * 2;
            n *= 2;
            cout << arr[i][j] << "\t";
        }
        cout << "\n\t\n";
    }

}