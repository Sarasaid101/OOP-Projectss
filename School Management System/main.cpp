#include <iostream>
#include <Person.h>
#include <student.h>
#include <Teacher.h>
#include <Staff.h>
#include <Course.h>
#include <Classroom.h>
#include <school.h>
using namespace std;

int main()
{
    int x;
    school s;
    do
    {
        cout<<"Press 0 To Exit"<<endl;
        cout<<"Press 1 To Add Student"<<endl;
        cout<<"Press 2 To Add Teacher"<<endl;
        cout<<"Press 3 To Add Staff"<<endl;
        cout<<"Press 4 To Add Course"<<endl;
        cout<<"Press 5 To Add Class Room"<<endl;
        cout<<"Press 6 To Print All Students"<<endl;
        cout<<"Press 7 To Print All Teachers"<<endl;
        cout<<"Press 8 To Print All Staffs"<<endl;
        cout<<"Press 9 To Print All courses"<<endl;
        cout<<"Press 10 To Print All Class Rooms"<<endl;
        cin>>x;
        system("cls");

        switch(x)
        {
        case 0:
            cout<<"The Program End."<<endl;
            break;
        case 1:
        {
            Student st;
            st.information();
            s.addStudent(st);
            break;
        }
        case 2:
        {
            Teacher t;
            t.information();
            s.addTeacher(t);
            break;
        }
        case 3:
        {
            Staff f;
            f.information();
            s.addStaff(f);
            break;
        }

        case 4:
        {
            Course c;
            c.information();
            s.addCourse(c);
            break;
        }
        case 5:
        {
            Classroom cl;
            cl.information();
            s.addClassroom(cl);
            break;
        }
        case 6:
        {
            s.printStudents();
            break;
        }
        case 7:
        {
            s.printTeachers();
            break;
        }
        case 8:
        {
            s.printStaffs();
            break;
        }
        case 9:
        {
            s.printCourses();
            break;
        }
        case 10:
        {
            s.printClassrooms();
            break;
        }
        }
        }while(x != 0);

        return 0;
    }
