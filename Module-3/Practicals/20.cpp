// 3. Inheritance Example
// o Write a program that implements inheritance using a base class Person and derived
// classes Student and Teacher. Demonstrate reusability through inheritance.
// o Objective: Learn the concept of inheritance.

#include<iostream>
using namespace std;
class Person
{
    private:
        string name,course;
        int age;

    public:
        void Set(string n, int a, string c)
        {
            name = n;
            age = a;
            course = c;
        }
        void Information()
        {
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "Course Name : " << course << endl;
        }
};
class Student : public Person
{
    private:
        double stud_id;

    public:
        void setstud_id(double id)
        {
            stud_id = id;
        }
        void student_info()
        {
            cout << "Student_Id : " << stud_id << endl;
        }
};
class Teacher : public Person
{
    private:
        double emp_id;

    public:
        void setemp_id(double id)
        {
            emp_id = id;
        }
        void emp_info()
        {
            cout << "Employee_Id : " << emp_id << endl;
        }
};
int main()
{
    Student s1;
    s1.setstud_id(198765);
    s1.Set("Mitu", 21, "C++");
    Teacher t1;
    t1.setemp_id(153211);
    t1.Set("Mr Ridham Sir", 25, "C++");

    cout << "Display The Student Information" << endl;
    s1.student_info();
    s1.Information();

    cout << "Display The Employess Infomation" << endl;
    t1.emp_info();
    t1.Information();
    return 0;
}


// Display The Student Information
// Student_Id : 198765
// Name : Mitu
// Age : 21
// Course Name : C++
// Display The Employess Infomation
// Employee_Id : 153211
// Name : Mr Ridham Sir
// Age : 25
// Course Name : C++