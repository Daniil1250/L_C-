// ======= ФУНКЦИИ И ИХ СКЕЛЕТЫ 
// функции - создаются вне других func ЭТО ВАЖНО



#include <iostream>
#include <string>

using namespace std;


// Скелеты функций, которые позволяют понять, то что они вообще существуют в этом файле
void print(string word);
int add(int a, int b); 
//---------------------


int main()
{
    setlocale(LC_ALL, "RU");
  
    //print("Sosatiii");
    //string words = "Ebis";
    //print(words);

    int res = add(5, 6);
    int res2 = add(51, 4);

    if (res > res2)
        cout << res;
    else
        cout << res2;

    return 0;
}

void print(string word) {
    cout << word << endl;

}

int add(int a, int b) {
    return a + b;
}
