#include "Header.h"

unsigned short height;

void ReadPersonData(string& name, unsigned short& age, unsigned short& h, unsigned short& weight) { // ������������ ���� � ���������� ���, �������, ���� � ��� ��������. ��� ����� ������������ ������������� ����� �������.
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonHeight();
    h = height;
    ReadPersonWeight(weight);
}
