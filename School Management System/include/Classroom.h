#ifndef CLASSROOM_H
#define CLASSROOM_H

#include <iostream>
using namespace std;

class Classroom
{
private:
    int roomNumber;
    int capacity;

public:
    Classroom()
    {

    }

    Classroom(int roomNumber, int capacity)
    {
        this->roomNumber = roomNumber;
        this->capacity = capacity;
    }

    void print()
    {
        cout << "The room namber is : " << roomNumber << endl;
        cout << "The capacity : " << capacity << endl;
    }

    void information()
    {
        cout << "Please enter the room number : ";
        cin >> roomNumber;

        cout << "Please enter the capacity : ";
        cin >> capacity;
    }

    void setRoomNumber(int roomNumber)
    {
        this->roomNumber = roomNumber;
    }

    void setCapacity(int capacity)
    {
        this->capacity = capacity;
    }

    int getRoomNumber()
    {
        return roomNumber;
    }

    int getCapacity()
    {
        return capacity;
    }
};

#endif // CLASSROOM_H
