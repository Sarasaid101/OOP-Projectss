#ifndef STUDENT_H
#define STUDENT_H
#include <Person.h>
#include <iostream>
using namespace std;

class Student:public Person
{
private:
    string gradeLevel;
    float gpa;

public:
    Student()
    {

    }
    Student(string name,string gender,string address,
            string phoneNumber,string email,int id,int age,
            string gradeLevel,float gpa)
    {
        this->gradeLevel=gradeLevel;
        this->gpa=gpa;
        this->name = name;
        this->gender = gender;
        this->address = address;
        this->phoneNumber = phoneNumber;
        this->email = email;
        this->id = id;
        this->age = age;
    }
    void print ()
    {
        Person::print();
        cout<<"The grade level is : "<<gradeLevel<<endl;
        cout<<"The GPA is : "<<gpa<<endl;
    }
    void information()
    {
        Person::information();
        cout<<"please enter your grade level : "<<endl;
        cin>>gradeLevel;
        cout<<"please enter your GPA : "<<endl;
        cin>>gpa;
    }
    void setGradeLevel(string gradeLevel)
    {
        this->gradeLevel=gradeLevel;
    }
    void setGpa(float gpa)
    {
        this->gpa=gpa;
    }
    string getGradeLevel()
    {
        return gradeLevel;
    }
    float getGpa()
    {
        return gpa;
    }


};

#endif // STUDENT_H
