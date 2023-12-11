#include "Header.h"

unsigned short height;

void ReadPersonData(string& name, unsigned short& age, unsigned short& h, unsigned short& weight){ // Осуществляет ввод с клавиатуры имя, возраст, рост и вес человека. Для ввода использовать разработанные ранее функции.
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonHeight();
    h = height;
    ReadPersonWeight(weight);
}
