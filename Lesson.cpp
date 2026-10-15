#include <iostream>


using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
  
    cout << "Дневник\n";
    cout << "=================\n";
    cout << "Введите кол-во оценок: ";
    int count_oc;
    cin >> count_oc;

    int* array_oc = new int[count_oc];
    int assessment;
    int firstTwoIndex = -1;


    for (int i = 0; i < count_oc; i++) {
        cout << "Введите оценку номер " << i + 1 << ": ";
        cin >> assessment;
        array_oc[i] = assessment;
    }

    int minOc = array_oc[0];
    int maxOc = array_oc[0];
    int summ = 0;

    for (int i = 0; i < count_oc; i++) {
        cout << "Оценки: " << array_oc[i] << " ";
        summ += array_oc[i];

        if (array_oc[i] < minOc) {
            minOc = array_oc[i];
        }

        if (array_oc[i] > maxOc) {
            maxOc = array_oc[i];
        }

       
    }
    
    for (int i = 0; i < count_oc; i++) {
            if (array_oc[i] == 2) {
                firstTwoIndex = i;  
                break;             
            }
        }
    float sr_ball = static_cast<float>(summ) / count_oc;

    if (sr_ball >= 4.5) {
        cout << "\nВердикт: Отличная успеваемость.\n";
    }
    else if (sr_ball >= 3.5) {
        cout << "\nВердикт: Хорошая успеваемость.\n";
    }
    else if (sr_ball >= 2.5)
        cout << "\nВердикт: Удолетворительная успеваемость.\n";
    else {
        cout << "\nВердикт: Плохая успеваемость.\n";
    }

    cout << "\nСредний балл: " << sr_ball;
    cout << "\nСумма оценок: " << summ;
    cout << "\nМинимальная оценка: " << minOc << endl;
    cout << "Максимальная оценка: " << maxOc << endl;

    if (firstTwoIndex != -1) {
        cout << "Первая двойка находится под номером: " << firstTwoIndex + 1 << endl;
    }
    else {
        cout << "Двоек нет!" << endl;
    }


       delete[] array_oc;
       return 0;
}


//SetConsoleCP(1251);
//SetConsoleOutputCP(1251);

/*
Урок по переменным
+++++++++++++++++++++++
int - 4 байта 
short - 2 байта 
long - 8 байтов
float - тип данных с плав-ей точкой
char - принимает толь ОДИН символ
bool - true или false
unsigned num = 12; // данная переменная не будет принимать отриц числа


СОКРАЩЕНИЕ ОПРАЦИИ (счетчик)

a += 5 // берем начальное значение (a) и прибавляем 5
a *= 5 // берем начальное значение (a) и умножаем на 5
ЛИБО ЖЕ 
a++; (плюс 1)
a--; (минус 1)
+++++++++++++++++++++++++++++++++++++++
РАНДОМНОЕ ЧИСЛО 

srand(time(NULL)); // отключаем зависимость от времени
int result = 1 + rand() % 99; // от 1 рандомное число до 99
cout << result; // вывводим знач-е переменной

------Для строки на кирилицы----------
#include <windows.h>

SetConsoleCP(1251);
SetConsoleOutputCP(1251);
std::string name;


+++++++++++++++++++++++


Для условий ОПЕРАТОРЫ
+++++++++++++++++++++++

|| - или
&& - и
--------------------------------
ПРОГРАММНЫЙ КОД 

  SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "RU");
    int age;
    std::string name;



    std::cout << "Введите возраст: \n";
    std::cin >> age;

    if (age < 18 && age == 12) {
        std::cout << "Тебе всего: " << age << " увы, доступ закрыт :(";
    }else {
        std::cout << "Введите имя: \n";
        std::cin >> name;

        std::cout << "Здраствуй " << name << " тебе " << age;
    }


    ++++++++++++++++++++++++++++++++++++++++
    SWITCH and CASE 


     int num;
    std::cin >> num;

    switch (num) {
    case 5:
        std::cout << "Num is 5";
        break;
    case 50:
        std::cout << "Num is 50";
        break;
    case 34:
        std::cout << "Num is 34";
        break;
    // break ОБЯЗАТЕЛЬНО для завершения КЕЙСА
    // switch это то что мы будем проверять
    // а case это варианты, и если совпадет,
    // значит обработаем
    default:
        std::cout << "Это как else";
        break;
    }

    ++++++++++++++++++++++++++
    КАЛЬКУЛЯТОР 



     setlocale(LC_ALL, "RU");
    std::cout << "Калькулятор\n";
    int num1, num2;
    char math;
    short res;

    std::cout << "Введите число 1: \n";
    std::cin >> num1;

    std::cout << "Введите число 2: \n";
    std::cin >> num2;


    std::cout << "Что сделаем с этими числами? \n";
    std::cin >> math;

    switch (math) {
    case '+': res = num1 + num2; break;
    case '-': res = num1 - num2; break;
    case '/': res = num1 / num2; break;
    case '*': res = num1 * num2; break;
    default:
        res = 0;
        std::cout << "Ошибка!";
         break;
    }

    std::cout << "Результат: " << res;

=============================================

ЦИКЛЫ 


  //// если 1 строчка кода, можно НЕ СТАВИТЬ фигурные скобки
    //for (int i = 100; i >= 10; i-=10)
    //    cout << "Эллемент: " << i << endl;
    //

   //// Цикл while
   // int j = 0;
   // while (j < 10) {
   //     cout << "Эллемент: " << j << endl;
   //     j += 2;
   // }

    // Цикл do while

    int k = 100;
    do {
        cout << "Эллемент: " << k << endl;
        k -= 10;
    } while (k > 10);


    Работа с циклами с помощью BREAK и CONTINUE

    for (int i = 1; i < 15; i++) {
        if (i == 11)
            break;

        if (i % 2 == 0)
            continue;

        cout << "Эллемент: " << i << endl; // выводит нечет числа
    }
+++++++++++++++++++++++
Угадай число


  srand(time(NULL));
    int rand_num = 1 + rand() % 15;
    bool stop = false;
    int user_input;
    do {
        cout << "Введите число: ";
        cin >> user_input;
        if (user_input != rand_num)
            cout << "Вы не угадали!";
        else
            stop = true;

    } while (!stop);

    cout << "Вы угадали, это число: " << user_input;


+++++++++++Динамический массив данных+++++++++++++++
 
    int *nums = new int[3]; //выделяю память для массива из 3 элементов, но когда объявляю, указываю УКАЗАТЕЛЬ(на начальном этапе, это просто массив, но немного по другому записаный)
    nums[0] = 45;
    cout << nums[0] << "\n";
    delete[] nums; //очищаем память, удаляем от туда динамический массив
    // очищаем память, только после того, когда мы ПЕРЕСТАЕМ ее пользховать
    //если мы уберем кв скобки, значит мы из памяти удалим ПЕРМЕННУЮ nums
    // int *nums = new int; //здесь мы выделяем память для ПЕРЕМЕННОЙ



+++++++++++Работа со строками и символами+++++++++++++++
 

 #include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "RU");


    string words = "Привет!"; //по факту это является МАССИВОМ
    cout << words << endl;
    words[0] = 'К';
    cout <<  words << endl;


    char word[4] = {'П', 'а', 'п', 'а'};
    for (int i = 0; i < 4; i++)
        cout << word[i] << "\n";

    char kin[] = "Сосать!";
    cout << kin[0] << endl; // выведит первый элемент массива kin
    for (int i = 0; i < 6; i++)
        cout << kin[i];

    cout << "\n";

    string inp;
    cin >> inp;
    cout << inp;

    return 0;
}



=================ПОВТОРЕНИЕ ТЕМ====================

#include <iostream>


using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    cout << "Дневник\n";
    cout << "=================\n";
    cout << "Введите кол-во оценок: ";
    int count_oc;
    cin >> count_oc;

    int* array_oc = new int[count_oc];
    int assessment;
    int firstTwoIndex = -1;


    for (int i = 0; i < count_oc; i++) {
        cout << "Введите оценку номер " << i + 1 << ": ";
        cin >> assessment;
        array_oc[i] = assessment;
    }

    int minOc = array_oc[0];
    int maxOc = array_oc[0];
    int summ = 0;

    for (int i = 0; i < count_oc; i++) {
        cout << "Оценки: " << array_oc[i] << " ";
        summ += array_oc[i];

        if (array_oc[i] < minOc) {
            minOc = array_oc[i];
        }

        if (array_oc[i] > maxOc) {
            maxOc = array_oc[i];
        }


    }

    for (int i = 0; i < count_oc; i++) {
            if (array_oc[i] == 2) {
                firstTwoIndex = i;
                break;
            }
        }
    float sr_ball = static_cast<float>(summ) / count_oc;

    if (sr_ball >= 4.5) {
        cout << "\nВердикт: Отличная успеваемость.\n";
    }
    else if (sr_ball >= 3.5) {
        cout << "\nВердикт: Хорошая успеваемость.\n";
    }
    else if (sr_ball >= 2.5)
        cout << "\nВердикт: Удолетворительная успеваемость.\n";
    else {
        cout << "\nВердикт: Плохая успеваемость.\n";
    }

    cout << "\nСредний балл: " << sr_ball;
    cout << "\nСумма оценок: " << summ;
    cout << "\nМинимальная оценка: " << minOc << endl;
    cout << "Максимальная оценка: " << maxOc << endl;

    if (firstTwoIndex != -1) {
        cout << "Первая двойка находится под номером: " << firstTwoIndex + 1 << endl;
    }
    else {
        cout << "Двоек нет!" << endl;
    }


       delete[] array_oc;
       return 0;
}



*/


