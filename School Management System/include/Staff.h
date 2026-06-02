#ifndef STAFF_H
#define STAFF_H

#include <iostream>
using namespace std;

class Staff:public Person
{
private:
    string role;
    float salary;

public:
    Staff()
    {

    }
    Staff(string name,string gender,string address,
          string phoneNumber,string email,int id,int age,
          string role, float salary)
    {
        this->role = role;
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
        cout << "The role is : " << role << endl;
        cout << "The salary is : " << salary << endl;
    }
    void information()
    {
        Person::information();
        cout << "Please enter role : ";
        cin >> role;

        cout << "Please enter salary : ";
        cin >> salary;
    }
    void setRole(string role)
    {
        this->role = role;
    }
    void setSalary(float salary)
    {
        this->salary = salary;
    }
    string getRole()
    {
        return role;
    }
    float getSalary()
    {
        return salary;
    }
};

#endif // STAFF_H
