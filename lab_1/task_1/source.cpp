#include <iostream>
#include <string>
using namespace std;

unsigned short height; // ���������� ����������
string salary_string;

unsigned short ReadPersonAge() { // ������������ ���� � ���������� �������� ��������
    cout << "������� �������" << endl;
    unsigned short PersonAge;
    cin >> PersonAge;
    return PersonAge;
}
string ReadPersonName() { // ������������ ���� � ���������� ����� ��������
    cout << "������� ���" << endl;
    string PersonName;
    cin >> PersonName;
    return PersonName;
}
void ReadPersonHeight() { // ������������ ���� � ���������� ����� ��������
    cout << "������� ����" << endl;
    cin >> height;
}
void ReadPersonWeight(unsigned short& weight) { // ������������ ���� � ���������� ���� ��������
    cout << "������� ���" << endl;
    cin >> weight;
}
void ReadPersonSalary(double* salary) { // ������������ ���� � ���������� ���������� ����� ��������
    cout << "������� ���������� �����" << endl;
    cin >> *salary;
}
void WritePersonData(const string& name, const string& height, const string& weight, const unsigned short* age) { // ������������ ����� �� ����� �����, ��������, �����, ����, ���������� ����� ��������
    cout << "���: " << name << ". ����: " << height << ". ���: " << weight << ". �������: " << *age << ". ���������� �����: " << salary_string << endl;
}

void ReadPersonData(string& name, unsigned short& age, double& salary) { // ������������ ���� � ���������� ���, ������� � ���������� ����� ��������. ��� ����� ������������ ������������� ����� �������
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonSalary(&salary);
}
void ReadPersonData(string& name, unsigned short& age, unsigned short& hei, unsigned short& weight) { // ������������ ���� � ���������� ���, �������, ���� � ��� ��������. ��� ����� ������������ ������������� ����� �������.
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonHeight();
    hei = height;
    ReadPersonWeight(weight);
}
#ifndef DO_NOT_DEFINE_MAIN
int main() {
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
#endif
