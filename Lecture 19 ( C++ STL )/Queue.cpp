#include<iostream>
#include<queue>
using namespace std;
int main(){
    //Queue :- First In First Out
    queue<int> newqueue;

    newqueue.push(782);
    newqueue.push(721);
    newqueue.push(902);

    cout << "Getting first element : " << newqueue.front() << endl;
    
    newqueue.pop();
    cout << "Getting first element after pop : " << newqueue.front() << endl;

}