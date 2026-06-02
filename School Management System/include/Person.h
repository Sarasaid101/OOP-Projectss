#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class Person
{
protected:
    string name;
    string gender;
    string address;
    string phoneNumber;
    string email;
    int id;
    int age;

public:
    Person()
    {

    }
    Person(string name,string gender,string address,string phoneNumber,string email,int id,int age)
    {
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
        cout<<"The name is : "<<name<<endl;
        cout<<"The gender is : "<<gender<<endl;
        cout<<"The address is : "<<address<<endl;
        cout<<"The phone number is : "<<phoneNumber<<endl;
        cout<<"The email is :  "<<email<<endl;
        cout<<"The ID is : "<<id<<endl;
        cout<<"The Age is : "<<age<<endl;

    }
    void information()
    {
        cout<<"Please enter your name : ";
        cin>>name;

        cout<<"Please enter your gender : ";
        cin>>gender;

        cout<<"Please enter your address : ";
        cin>>address;

        cout<<"Please enter your Phone number : ";
        cin>>phoneNumber;

        cout<<"Please enter your Email : ";
        cin>>email;

        cout<<"Please enter your ID : ";
        cin>>id;

        cout<<"Please enter your Age : ";
        cin>>age;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setGender(string gender)
    {
        this->gender=gender;
    }
    void setAddress(string address)
    {
        this->address=address;
    }
    void setPhoneNumber(string phoneNumber)
    {
        this->phoneNumber=phoneNumber;
    }
    void setemail(string email)
    {
        this->email=email;
    }
    void setAge(int age)
    {
        this->age=age;
    }
    void setId(int id)
    {
        this->id=id;
    }
    string getName()
    {
        return name;
    }
    string getGender()
    {
        return gender;
    }
    string getAddress()
    {
        return address;
    }
    string getPhoneNumber()
    {
        return phoneNumber;
    }
    string getEmail()
    {
        return email;
    }
    int getAge()
    {
        return age;
    }
    int getId()
    {
        return id;
    }



};

#endif // PERSON_H
