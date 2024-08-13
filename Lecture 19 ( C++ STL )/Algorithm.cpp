#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

    vector<int> v ;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(6);
    v.push_back(7);
    v.push_back(9);
    v.push_back(3);

    cout << binary_search(v.begin(),v.end(),9) << endl;

    int a = 91 ;
    int b = 92 ;

    cout << max(a,b) << endl;
}