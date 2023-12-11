#include "Header.h"
unsigned short ReadPersonAge() { // Осуществляет ввод с клавиатуры возраста человека
    cout << "Введите возраст" << endl;
    unsigned short PersonAge;
    cin >> PersonAge;
    return PersonAge;
}
