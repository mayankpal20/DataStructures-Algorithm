#include<iostream>
using namespace std;

void print(int *p){
    cout << *p << endl;
}
int main(){
    int a = 89 ;
    int *p = &a;
    print(p);
    
}