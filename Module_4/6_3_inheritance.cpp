//  Inheritance Example
//  o Write a program that implements inheritance using a base class Person and derived classes Student and Teacher. 
//    Demonstrate reusability through inheritance.
//  o Objective : Learn the concept of inheritance.



#include<iostream>
using namespace std;

class person{
    protected:
    string name;
    int age;
    public:
    person(){
        cout<<"\n enter the name : ";
        cin>>name;
        cout<<"\n enter the age : ";
        cin>>age;
    }
    void display(){
        cout<<"\n name : "<<name<<"\n age : "<<age;
    }
};
class student : public person{
    private:
    int student_id;
    public:
    student(){
        cout<<"\n enter the student id : ";
        cin>>student_id;
    }
    void display_student(){
        display();
        cout<<"\n student id : "<<student_id;
    }
};
class teacher : public person{
    private:
    string subject;
    public:
    teacher(){
        cout<<"\n enter the subject name : ";
        cin>>subject;
    }
    void display_teacher(){
        display();
        cout<<"\n subject : "<<subject;
    }
};

int main(){
    cout<<"\n enter the student detail : ";
    student s;
    
    cout<<"\n enter the teacher detail : ";
    teacher t;

    cout<<"\n display the student details : ";
    s.display_student();
    cout<<"\n \n display the teacher details : ";
    t.display_teacher();
}