#include "Header.h"

string salary_string;

void WritePersonData(const string& name, const string& height, const string& weight, const unsigned short* age) { // ������������ ����� �� ����� �����, ��������, �����, ����, ���������� ����� ��������
    cout << "���: " << name << ". ����: " << height << ". ���: " << weight << ". �������: " << *age << ". ���������� �����: " << salary_string << endl;
}
