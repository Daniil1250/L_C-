#include <iostream>
#include <string>

using namespace std;

int findLast(int* arr, int len, int target);


int main()
{
    setlocale(LC_ALL, "RU");

    int arr[] = { 3, 8, 1, 8, 5, 8, 2 };
    int size = 7;

    cout << "Массив: ";
    for (int j = 0; j < size; j++)
        cout << arr[j] << " ";

    int target;
    cout << "\nВведите число для поиска: ";
    cin >> target;

    int result = findLast(arr, size, target);

    if (result == 0) {
        cout << "\nЧисло " << target << " не найдено!";
    }
    else {
        cout << "Число " << target << " найдено." << "Последнее вхождение - индекс: " << result;
    }


    return 0;
}

int findLast(int* arr, int len, int target) {
    int chos = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] == target) {
            chos = i;
           
        }
        
    
    }
    return chos;
}
