#include<iostream>
using namespace std;

//Creating C1 

class C1{
    public:
    int age;
    int rollno;
    string add;
};

//Access C1

class C2 : public C1{
    
    public:
    string color;
    string job;
};

class C3 : public C1{
    
    public:
    string color1;
    string job1;
};

int main(){

    C1 obj1;
    obj1.rollno=100;
    obj1.age=100;
    cout << obj1.rollno << endl;
    cout << obj1.age << endl;

}