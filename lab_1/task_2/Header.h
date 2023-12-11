#include <iostream>
#include <string>
using namespace std;

unsigned short ReadPersonAge();
void ReadPersonData(string& name, unsigned short& age, double& salary);
void ReadPersonData(string& name, unsigned short& age, unsigned short& hei, unsigned short& weight);
void ReadPersonHeight();
string ReadPersonName();
void ReadPersonSalary(double *salary);
void ReadPersonWeight(unsigned short& weight);
void WritePersonData(const string& name, const string& height, const string& weight, const unsigned short* age);
