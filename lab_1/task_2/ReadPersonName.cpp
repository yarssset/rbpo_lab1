#include "Header.h"
string ReadPersonName() { // Осуществляет ввод с клавиатуры имени человека
    cout << "Введите имя" << endl;
    string PersonName;
    cin >> PersonName;
    return PersonName;
}
