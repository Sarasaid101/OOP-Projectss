#ifndef COURSE_H
#define COURSE_H

#include <iostream>
using namespace std;

class Course
{
private:
    string courseCode;
    string courseName;
    string teacherName;
public:
    Course ()
    {

    }
    Course (string courseCode, string courseName, string teacherName)
    {
        this->courseCode = courseCode;
        this->courseName = courseName;
        this->teacherName = teacherName;
    }
    void print()
    {
        cout << "The code is : " << courseCode << endl;
        cout << "The course name is : " << courseName << endl;
        cout << "The teacher name is : " << teacherName << endl;
    }
    void information()
    {
        cout << "Please enter your code : ";
        cin >> courseCode;

        cout << "Please enter course name : ";
        cin >> courseName;

        cout << "Please enter your teacher name : ";
        cin >> teacherName;
    }

    void setCourseCode(string courseCode)
    {
        this->courseCode = courseCode;
    }

    void setCourseName(string courseName)
    {
        this->courseName = courseName;
    }

    void setTeacherName(string teacherName)
    {
        this->teacherName = teacherName;
    }

    string getCourseCode()
    {
        return courseCode;
    }

    string getCourseName()
    {
        return courseName;
    }

    string getTeacherName()
    {
        return teacherName;
    }
};

#endif // COURSE_H
