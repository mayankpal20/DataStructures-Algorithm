#include<iostream>
#include<stack>
using namespace std;
int main(){
    //Stack :- Last in first out
    stack<int> newstack;

    newstack.push(78);
    newstack.push(72);
    newstack.push(26);
    newstack.push(726);

    cout << "getting top element : " << newstack.top() << endl;

    //After removing element
    newstack.pop();

    cout << "After pop getting top element : " << newstack.top() << endl;
    cout << "Size of Stack : " << newstack.size() << endl;
}