#ifndef EXAM_H
#define EXAM_H

#include <iostream>
using namespace std;

class Exam
{
private:
    string examName;
    string courseCode;
    string examDate;
public:
    Exam()
    {
    }
    Exam(string examName , string courseCode , string examDate)
    {
        this-> examName = examName;
        this-> courseCode = courseCode;
        this-> examDate = examDate;
    }
    void print()
    {
        cout<<"The exam name is : "<<examName<<endl;
        cout<<"The course code is : "<<courseCode<<endl;
        cout<<"The exam date : "<<examDate<<endl;

    }
    void information()
    {
        cout<<"Please enter the exam name : ";
        cin>>examName;

        cout<<"Please enter the course code : ";
        cin>>courseCode;

        cout<<"Please enter the exam date : ";
        cin>>examDate;
    }
    void setExamName(string examName)
    {
        this-> examName = examName;
    }
    void setCourseCode(string courseCode)
    {
        this-> courseCode = courseCode;
    }
    void setExamDate(string examDate)
    {
        this-> examDate = examDate;
    }
    string getExamName()
    {
        return examName;
    }
    string getCourseCode()
    {
        return courseCode;
    }
    string getExamDate()
    {
        return examDate;
    }

};

#endif // EXAM_H
