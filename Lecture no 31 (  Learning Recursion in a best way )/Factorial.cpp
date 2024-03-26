#include<iostream>
using namespace std;
int factorial(int no){
    
    if(no==0){
        return 1 ;
    }

    int smallprob = factorial(no-1);
    int bigprob = no * smallprob;

    return bigprob;
}
int main(){
    int n ;
    cin >> n ;
    int res = factorial(n);
    cout << res << endl;
}