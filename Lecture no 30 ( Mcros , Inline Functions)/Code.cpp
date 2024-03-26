
#include<iostream>

using namespace std;
 
/*Defining macro*/

#define PIV 3.14
 
/*Inline Function*/

// inline int funct(int &a , int &b);

int add(int &a , int &b){

  return a+b;

}

int main(){
 
  int r = 10 ;

  double area =  PIV * r * r ;

  cout << area << endl;
 
  /*Inline Functions*/
 
  int i = 10 ;

  int j = 20;

  int res = 0 ;
 
  res = add(i,j);

  cout << res << endl;
 
  i +=100;

  j +=2;

  res = add(i,j);

  cout << res << endl;

}