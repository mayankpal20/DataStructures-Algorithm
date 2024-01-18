#include<iostream>
#include<list>
using namespace std;
int main(){
    // List :- which is make using linked list
     list<int> li;
     li.push_back(89);
     li.push_front(72);
     
     for(int i : li){
        cout << i << endl;
     }

     // To delete element from a list 
    li.erase(li.begin());

    //copy one list into another 
    list<int> newlist(li);

}