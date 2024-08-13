#include<iostream>
#include<vector>
using namespace std;
int main(){

      //In vector first it creates a array of double of its current size then paste all elements into new array and dumb current array 

     vector<int> vec;
      //capacity :- space assigned for elements 
      // size :- no of elements present in a vector 
      
      //Intializing and assigning same values 
      vector<int> v (5,2) ;
      
  //Capacity of vector :- It doubles the size of vector , It does not print size of vector 
  vec.push_back(2);
  cout << "Capacity : " << vec.capacity() << endl;
  vec.push_back(4);
  cout << "Capacity : " << vec.capacity() << endl;
  vec.push_back(6);
  cout << "Capacty : " << vec.capacity() << endl;
  vec.push_back(8);
  cout << "Capacity : " << vec.capacity() << endl;

  //Size of vector :- Which means currently no of elements are there 
  cout << "Size of Vector : " << vec.size() << endl; 

  //Getting first & last element
  cout << "First Element : " << vec.front() << endl;
  cout << "Last Element : " << vec.back() << endl;

  //Pop back an element;
  cout << "Before pop back" << endl;
  for(int i : vec){
    cout << i << " " ;
  }
  cout << endl;
  cout << "After pop back" << endl;
  vec.pop_back();
  for(int j: vec){
    cout << j << " " ;
  }
  cout << endl;

  //Clear a vector :- size will be 0 but capacity still remain same as before clear
  vec.clear();
  cout << "Size of Vector : " << vec.size() << endl; 

  //Intialize a vector with some xyz size
  //vector<int> vectorname(size,intializing no) :- all elements will be same in this case 
  vector<int> intializevector(8);

  //Coping one vector into another
  vector<int> newvect(vec);


}