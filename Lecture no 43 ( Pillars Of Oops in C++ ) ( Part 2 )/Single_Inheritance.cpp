#include<iostream>
using namespace std;

//Creating Parent class 

class Human{
    public:
    int age;
    int rollno;
    string add;
};

//Access Parnet class :- Single Inheritance

class Male : public Human{
    
    public:
    string color;
    string job;
};

int main(){

    Male obj1;
    obj1.rollno=100;
    obj1.age=100;
    cout << obj1.rollno << endl;
    cout << obj1.age << endl;

}