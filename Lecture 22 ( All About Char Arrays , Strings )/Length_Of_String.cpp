#include<iostream>
using namespace std;
int charcgetlength(char name[]){
    int count = 0 ;
    for(int i = 0 ; name[i]!='\0' ; i++){
        count = count + 1;
    }
    return count;
}
int main(){
    char ch[10];
    cin >> ch ;
    cout << "Enter a String : " << endl;
    int length = charcgetlength(ch); 
    cout << "Length is" << length <<endl;
}