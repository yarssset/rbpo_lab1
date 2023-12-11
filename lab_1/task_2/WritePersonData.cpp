#include "Header.h"

string salary_string;

void WritePersonData(const string& name, const string& height, const string& weight, const unsigned short* age){ // Осуществляет вывод на экран имени, возраста, роста, веса, заработной платы человека
    setlocale(LC_ALL, "Russian");
    cout << "Имя: " << name << ". Рост: " << height << ". Вес: " << weight << ". Возраст: " << *age << ". Заработная плата: " << salary_string << endl;
}
