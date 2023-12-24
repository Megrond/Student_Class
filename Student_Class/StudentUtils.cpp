#include "StudentUtils.h"
#include <algorithm>

void StudentUtils::fillVector(vector<Student>& students)
{
    students.push_back(Student("Виктор", "Ромашов", 3));
    students.push_back(Student("Андрей", "Малыгин", 2));
    students.push_back(Student("Петр", "Иванов", 4));
    students.push_back(Student("Наталья", "Федорова", 1));
    students.push_back(Student("Михаил", "Никонов", 2));
}

void StudentUtils::printVector(const vector<Student>& students)
{
    for (const auto& student : students)
    {
        cout << student << endl;
    }
    cout << endl;
}

bool StudentUtils::compareByName(const Student& student1, const Student& student2)
{
    return student1.name < student2.name;
}

bool StudentUtils::compareBySurname(const Student& student1, const Student& student2)
{
    return student1.surname < student2.surname;
}

void StudentUtils::sortFirstThreeByCourse(vector<Student>& students)
{
    if (students.size() < 3) return;

    nth_element(students.begin(), students.begin() + 3, students.end(),
        [](const Student& lhs, const Student& rhs)
        {
            return lhs.course < rhs.course;
        }
    );

    sort(students.begin(), students.begin() + 3,
        [](const Student& lhs, const Student& rhs)
        {
            return lhs.course < rhs.course;
        }
    );
}
