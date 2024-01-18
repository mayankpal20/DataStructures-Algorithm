#include<iostream>
#include<set>

using namespace std;
int main(){
    
    /*
    Set :- 
    1. It stores unique no of element
    2. Element can no be modified , only it will be deleted or inserted  .
    3. It return element in sorted order
    */
   
   /*
   Unorder set :- It is more faster than normal set because It return element in random order*/

    set<int> newset;
    
    //Inserting elements in a set
    newset.insert(8);
    newset.insert(1);
    newset.insert(1);
    newset.insert(5);
    newset.insert(2);
    newset.insert(4);
    newset.insert(4);

    // It will print elements in a sorted order and all elements will be unique
    for(int i : newset){
        cout << i << " ";
    }cout << endl;

    newset.erase(newset.begin());

    //Iterator
    set<int>::iterator it = newset.begin();
    it++;
    newset.erase(it);


    //After erase one element 
    for(int i : newset){
        cout << i << " ";
    }cout << endl;

    //Count :- which check element is present or not in a set
    cout << "Element is present or not :- " << newset.count(2) << endl;

    //find :- It gives iterator or index of that element if it is present in a set
    set<int> :: iterator ct = newset.find(4);
    
    for(auto at=ct ; at!=newset.end();at++){
        cout << *at << " " ;
    }
}