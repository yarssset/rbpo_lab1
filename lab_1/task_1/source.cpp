#include <iostream>
#include <string>
using namespace std;

unsigned short height; // Глобальная переменная
string salary_string;

unsigned short ReadPersonAge(){ // Осуществляет ввод с клавиатуры возраста человека
    cout << "Введите возраст" << endl;
    unsigned short PersonAge;
    cin >> PersonAge;
    return PersonAge;
}
string ReadPersonName(){ // Осуществляет ввод с клавиатуры имени человека
    cout << "Введите имя" << endl;
    string PersonName;
    cin >> PersonName;
    return PersonName;
}
void ReadPersonHeight(){ // Осуществляет ввод с клавиатуры роста человека
    cout << "Введите рост" << endl;
    cin >> height;
}
void ReadPersonWeight(unsigned short& weight){ // Осуществляет ввод с клавиатуры веса человека
    cout << "Введите вес" << endl;
    cin >> weight;
}
void ReadPersonSalary(double *salary){ // Осуществляет ввод с клавиатуры заработной платы человека
    cout << "Введите заработную плату" << endl;
    cin >> *salary;
}
void WritePersonData(const string& name, const string& height, const string& weight, const unsigned short* age){ // Осуществляет вывод на экран имени, возраста, роста, веса, заработной платы человека
    cout << "Имя: " << name << ". Рост: " << height << ". Вес: " << weight << ". Возраст: " << *age << ". Заработная плата: " << salary_string << endl;
}

void ReadPersonData(string& name, unsigned short& age, double& salary){ // Осуществляет ввод с клавиатуры имя, возраст и заработную плату человека. Для ввода использовать разработанные ранее функции
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonSalary(&salary);
}
void ReadPersonData(string& name, unsigned short& age, unsigned short& hei, unsigned short& weight){ // Осуществляет ввод с клавиатуры имя, возраст, рост и вес человека. Для ввода использовать разработанные ранее функции.
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonHeight();
    hei = height;
    ReadPersonWeight(weight);
}
int main(){
    unsigned short age, height = 0, weight = 0;
    string name;
    double salary = 0.0;
    
    ReadPersonData(name, age, height, weight);
    cout << endl;
    ReadPersonData(name, age, salary);
    
    salary_string = to_string(salary);
    string height_string = to_string(height);
    string weight_string = to_string(weight);
    
    WritePersonData(name, height_string, weight_string, &age);
    return 0;
}
