#include<iostream>
#include<deque>
using namespace std;
int main(){
    // Deque :- means we can push and pop element from front as well as back

    deque<int> dequ ;
    
    //pushing element in double ended queue
    dequ.push_back(2);
    dequ.push_front(5);
    dequ.push_front(9);
    dequ.push_front(3);
    for(int i : dequ){
        cout << i << " " ;
    }
    cout << endl;

    //popback element from front as well as back
    dequ.pop_back();
    for(int j : dequ){
        cout << j << " " ;
    }
    cout << endl;
    
    dequ.pop_front();
    for(int k : dequ){
        cout << k << " " ;
    }
    cout << endl ;
    
    //Access element which is present at specific index
    cout << "Element at index 0 :- " << dequ.at(0) << endl;

    //Delete an element from deque :- Here u have to mentioned starting and ending
    dequ.erase(dequ.begin(),dequ.begin()+1);
    for(int k : dequ){
        cout << k << " ";
    }

}