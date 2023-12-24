#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student
{
    friend class StudentUtils;
public:

    string name;
    string surname;
    int course;

    Student(const string& name, const string& surname, int course)
        : name(name), surname(surname), course(course) {}

    friend ostream& operator<<(ostream& os, const Student& student)
    {
        os << student.name << " " << student.surname << ", Курс: " << student.course;
        return os;
    }
};
