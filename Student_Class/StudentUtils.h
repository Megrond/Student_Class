#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Student.h"

using namespace std;

class StudentUtils
{
public:
    static void fillVector(vector<Student>& students);
    static void printVector(const vector<Student>& students);
    static bool compareByName(const Student& student1, const Student& student2);
    static bool compareBySurname(const Student& student1, const Student& student2);
    static void sortFirstThreeByCourse(vector<Student>& students);
};

