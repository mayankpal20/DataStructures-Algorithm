#include<iostream>
using namespace std;
bool elementfoundornot(int arr[][5] , int elenent , int row , int col){
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j < col ; j++){
            if(elenent==arr[i][j]){
                return 1;
            }
        }
    }
    return 0;
}
int main(){


    int arr[4][5];


    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cin >> arr[i][j];
        }
    }

    int target ;
    cin >> target ;

    if(elementfoundornot(arr,target,4,5)){
        cout << "Element Found" << endl;
    }
    else{
        cout << "Element Not Found" << endl;
    }
}