#include<iostream>
using namespace std;

class A{
    public:
    void sayhello(){
        cout << "hey how are u ?" << endl;
    }

    void sayhello(string name){
        cout << "hey ?" << endl;
    }
};
int main(){
    A obj ;
    obj.sayhello();
}