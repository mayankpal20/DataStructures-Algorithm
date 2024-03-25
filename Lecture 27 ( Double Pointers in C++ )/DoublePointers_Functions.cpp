#include<iostream>
using namespace std;

void update(int **p2){
    /*No Change*/
   // p =  p + 1 ;

    /*Change is there*/
    //*p = *p + 1;

    /***/
    **p2 = **p2 + 1;
}
int main(){

    int a = 902;
    int *p = &a;
    int **p2 = &p;

    cout << "value of a : " << a << endl;
    cout << "value of p : " << *p << endl;
    cout << "value of p2 : " << **p2 << endl;

    update(p2);
    cout << "After Update " << endl;
    cout << "value of a : " << a << endl;
    cout << "value of p : " << p << endl;
    cout << "value of p2 : " << p2 << endl;

    
}