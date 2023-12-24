#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Student.h"
#include "StudentUtils.h"

using namespace std;

int main() 
{
    setlocale(LC_ALL, "RU");

    vector<Student> students;
    StudentUtils::fillVector(students);

    cout << "Первоначальный список:" << endl;
    StudentUtils::printVector(students);

    sort(students.begin(), students.end(), StudentUtils::compareByName);
    cout << "Сортировка по имени:" << endl;
    StudentUtils::printVector(students);

    stable_sort(students.begin(), students.end(), StudentUtils::compareBySurname);
    cout << "Сортировка по фамилии:" << endl;
    StudentUtils::printVector(students);

    StudentUtils::sortFirstThreeByCourse(students);
    cout << "Sorted First Three by Course:" << endl;
    StudentUtils::printVector(students);

    return 0;
}