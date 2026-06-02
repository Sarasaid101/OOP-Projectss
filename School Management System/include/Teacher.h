#ifndef TEACHER_H
#define TEACHER_H
#include <Person.h>
#include <iostream>
using namespace std;

class Teacher:public Person
{
private:
    string subjectSpecialization;
    float salary;

public:
    Teacher()
    {
    }

    Teacher(string name,string gender,string address,string phoneNumber,
            string email,int id,int age,string subjectSpecialization,
             float salary)
    {
        this->subjectSpecialization = subjectSpecialization;
        this->salary = salary;
        this->name = name;
        this->gender = gender;
        this->address = address;
        this->phoneNumber = phoneNumber;
        this->email = email;
        this->id = id;
        this->age = age;
    }

    void print()
    {
        Person::print();
        cout << "The subject specialization is : " << subjectSpecialization << endl;
        cout << "The salary is : " << salary << endl;
    }

    void information()
    {
        Person::information();
        cout << "please enter subject specialization : " << endl;
        cin >> subjectSpecialization;
        cout << "please enter salary : " << endl;
        cin >> salary;
    }

    void setSubjectSpecialization(string subjectSpecialization)
    {
        this->subjectSpecialization = subjectSpecialization;
    }

    void setSalary(float salary)
    {
        this->salary = salary;
    }

    string getSubjectSpecialization()
    {
        return subjectSpecialization;
    }

    float getSalary()
    {
        return salary;
    }
};

#endif // TEACHER_H
