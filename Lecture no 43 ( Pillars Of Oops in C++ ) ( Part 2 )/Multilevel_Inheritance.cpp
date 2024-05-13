#include<iostream>
using namespace std;

//Creating Class1  

class Class1{
    public:
    int age;
    int rollno;
    string add;
};

//Access Class1

class Class2 : public Class1{
    
    public:
    string color;
    string job;
};

class Class3: public Class1{

    public:
    string name;
    string officename;
};
int main(){

    Class2 obj1;
    obj1.rollno=100;
    obj1.age=100;
    cout << obj1.rollno << endl;
    cout << obj1.age << endl;

    //Creating Object of Class 3
    Class3 obj2;
    obj2.officename="off1";
    cout << obj2.officename << endl;

}