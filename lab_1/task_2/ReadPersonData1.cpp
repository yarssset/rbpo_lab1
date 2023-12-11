#include "Header.h"
void ReadPersonData(string& name, unsigned short& age, double& salary) { // Осуществляет ввод с клавиатуры имя, возраст и заработную плату человека. Для ввода использовать разработанные ранее функции
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonSalary(&salary);
}
