#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    Student()
    {
        rollNo = 0;
        name = "Unknown";
        marks = 0;
    }
    Student(int r, string n, float m)
    {
        rollNo = r;
        name = n;
        marks = m;
    }

    Student(int rollNo, string name, float marks)
    {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }

    void printDetails()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << endl;
    }
};

int main()
{
    Student s1;

    Student s2(1,"Rahul",85);

    Student s3(2,"Amit",90);

    s1.printDetails();
    s2.printDetails();
    s3.printDetails();

    return 0;
}
