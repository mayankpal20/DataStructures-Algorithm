#include<iostream>
#include<queue>
using namespace std;
int main(){

    // Prirority Queue :- default priority queue is based on max heap 
    
    //max heap
    priority_queue<int> pqmax;
    //always element will be greater from its next element when we are fetching it

    pqmax.push(73);
    pqmax.push(89); 
    pqmax.push(90);

    int size = pqmax.size();
    for(int i = 0 ; i <size ;i++){
        // It will give max element because it is based on max heap 
        cout << pqmax.top() << endl;
        pqmax.pop();
    }

    //min heap
    priority_queue<int,vector<int>,greater<int> > pqmin ;

}