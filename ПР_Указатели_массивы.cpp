#include <iostream>
#include <string>

using namespace std;

void minimal(int *arr, int len);

int main()
{
    setlocale(LC_ALL, "RU");

    int arr[] = {5, 7, 3, -2, 5};
    minimal(arr, 5);


    return 0;
}

// Из основного кода нам надо передать массив
// нам надо это сделать ЭКОНОМНО по памяти.
// в параметрах мы указываем, то что будем принимать УКАЗАТЕЛЬ
// и сам уже указатель, я буду как ПАЛЕЦ(ptr)
// перемещаться по каждому элементу

void minimal(int *arr, int len) {
    int min = *arr; // Указатель(палец) ставим на ПЕРВЫЙ элмент массива
    for (int i = 0; i < len; i++) {
        if (min > *(arr + i))
            min = *(arr + i);
        //выполняем сдвиг за счет + i
        // *(arr + i) ЯВЛЯЕТСЯ ОДНИМ ЦЕЛЫМ
    }

    cout << "Минимальный элемент: " << min << endl;
}
