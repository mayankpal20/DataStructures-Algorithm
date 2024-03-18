#include<iostream>
using namespace std;
int main(){
    int no = 990;

    cout << no << endl;

    /*Address of a no*/
    cout << "Address of a no : " << &no << endl;

    /*Creating a pointer*/
    int *pointer = &no;

    /*Value at that address*/
    cout << "Value which is present at that address : " << *pointer << endl;

    /*Address which is store at that pointer*/
    cout << "Address of that pointer : " << pointer << endl;

    cout << endl;



}