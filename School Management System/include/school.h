#ifndef SCHOOL_H
#define SCHOOL_H
#include <iostream>
#include <Person.h>
#include <Course.h>
#include <Classroom.h>
#include <Staff.h>
#include <Student.h>
using namespace std;

class school
{
private:
    string schoolName;
    string address;
    string principalName;
    Student students[1000];
    Teacher teachers[50];
    Staff staffs[50];
    Course courses[6];
    Classroom classrooms[50];
    int studentCounter=0;
    int teacherCounter=0;
    int staffCounter=0;
    int courseCounter=0;
    int classroomCounter=0;
public:
    void addStudent(Student s)
    {
        students[studentCounter]=s;
        studentCounter++;
    }
    void addTeacher(Teacher t)
    {
        teachers[teacherCounter]=t;
        teacherCounter++;
    }
    void addStaff(Staff f)
    {
        staffs[staffCounter]=f;
        staffCounter++;
    }
    void addCourse(Course c)
    {
        courses[courseCounter]=c;
        courseCounter++;
    }
    void addClassroom(Classroom cl )
    {
        classrooms[classroomCounter]=cl;
        classroomCounter++;
    }
    void printStudents()
    {
        for(int i = 0 ; i<studentCounter ; i++)
        {
            students[i].print();
            cout<<endl;
        }
    }
    void printTeachers()
    {
        for(int i = 0 ; i<teacherCounter ; i++)
        {
            teachers[i].print();
            cout<<endl;
        }
    }

    void printStaffs()
    {
        for(int i = 0 ; i<staffCounter ; i++)
        {
            staffs[i].print();
            cout<<endl;
        }
    }
    void printCourses()
    {
        for(int i = 0 ; i<courseCounter ; i++)
        {
            courses[i].print();
            cout<<endl;
        }
    }
    void printClassrooms()
    {
        for(int i = 0 ; i<classroomCounter ; i++)
        {
            classrooms[i].print();
            cout<<endl;
        }
    }




};

#endif // SCHOOL_H
