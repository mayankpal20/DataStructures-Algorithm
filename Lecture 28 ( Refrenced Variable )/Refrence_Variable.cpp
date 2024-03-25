#include<iostream>
using namespace std;
int main(){
    int i = 19 ;
    int & j = i ;

    cout << "Before Increment" << endl;
    cout <<i << endl;
    cout << j << endl;

    j++;
    
    cout << "After Increment" << endl;
    cout << i << endl;
    cout << j << endl;
}