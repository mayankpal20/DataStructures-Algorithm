#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> mp;

    //Adding value in a map
    mp[1]="kucbhi";
    mp[22]="name2";
    mp[2]="roy";

    //Another way of inserting value in map 
    mp.insert({55,"name3"});
    // Here we will get elements in sorted order based on key because we are using normal map.
    // If there is unordered map it will give in random order
    for(auto i : mp){
        cout << i.first<< " " << i.second << endl;
    }


}