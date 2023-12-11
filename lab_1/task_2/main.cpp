#include "Header.h"


int main() {
    unsigned short age, height = 0, weight = 0;
    string name;
    double salary = 0.0;
    extern string salary_string;

    ReadPersonData(name, age, height, weight);
    cout << endl;
    ReadPersonData(name, age, salary);

    salary_string = to_string(salary);
    string height_string = to_string(height);
    string weight_string = to_string(weight);

    WritePersonData(name, height_string, weight_string, &age);
    return 0;
}
