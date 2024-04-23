#include <iostream>
using namespace std;
void reversestring(string& s , int i , int j){

  if(i>j){
    return;
  }
  swap(s[i],s[j]);
  i++;
  j--;
  reversestring(s,i,j);
}
int main() {

  string s = "newstring";
  reversestring(s,0,s.length()-1);
  cout << s << endl;
}