#include<iostream>
#include<array>
using namespace std;
int main(){
     // Array Stl :- It is also a static array like normal array , but for that we have to include array library or file. and we are not going to use this array 
  array<int,6> a = {3,4,5,6,7,8};
  for(int i = 0 ; i<=a.size()-1 ; i++){
    cout << a[i] << endl;
  }
  //Getting specific values 
  cout << "Element at 4th Index : " << a.at(3) << endl;
  //check empty or not 
  cout << "Empty or Not : " << a.empty() << endl;
  //First Element
  cout << a.front() << endl;
  //Last Element 
  cout << a.back() << endl;
}