#include<iostream>
using namespace std;

//Creating Class1 

class C1{
    public:
    int age;
    int rollno;
    string add;
};

//Access Class1
class C2 : public C1{
    
    public:
    string color;
    string job;
};

class fc : public C2, public C1{

    public:
    string prop1;
    string prop2;
};

int main(){

    C2 obj1;
    obj1.rollno=100;
    obj1.age=100;
    cout << obj1.rollno << endl;
    cout << obj1.age << endl;

    fc obj2;
    obj2.prop1;
    obj2.color;


}