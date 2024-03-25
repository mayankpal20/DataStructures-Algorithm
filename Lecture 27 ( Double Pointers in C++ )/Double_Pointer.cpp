#include<iostream>
using namespace std;
int main(){

    int a = 902;
    int *p = &a;
    int **p2 = &p;

    cout << "value of a : " << a << endl;
    cout << "value of p : " << *p << endl;
    cout << "value of p2 : " << **p2 << endl;

    
}