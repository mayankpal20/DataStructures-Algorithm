#include<iostream>
using namespace std;

//Creating a Parent Class
class Human{
    public :
    int height;
    int weight;
    int age;

    public:
    int getage(){
        return this->age;
    }

    int setweight(int w){
        return this->weight=w;
    }


};

//Inherit parent class
class Male : public Human{
    
    public:
    string color;

    string sleep(){
        cout << "Someone is sleeping" << endl;
    }
};

int main(){
    
    Male obj1;
    
    cout << "Age is : " << obj1.age << endl;
    cout << "color is : " << obj1.color << endl;
    cout << "Weight is : " << obj1.setweight(100) << endl;

    cout << obj1.sleep() << endl;

}